#include <SPI.h> 
#include <Ethernet.h>

byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED }; 
byte ip[] = { 192, 168, 0, 150 }; 
byte gateway[] = { 192, 168, 0, 1 }; 
byte subnet[] = { 255, 255, 255, 0 }; 
EthernetServer server(80); 

String readString; 
int ledPin = 2;

void setup(){

    pinMode(ledPin, OUTPUT); 
    // Test LED 
    digitalWrite(ledPin, HIGH); 
    delay(500); 
    digitalWrite(ledPin, LOW); 
    
    //start Ethernet 
    Ethernet.begin(mac, ip, gateway, subnet); 
    server.begin(); 
}

void loop(){ 
    
    EthernetClient client = server.available(); 
    if (client) { 
        while (client.connected()) { 
            if (client.available()) { 
                char c = client.read();

               
                if (readString.length() < 100) {

                    //store characters to string 
                    readString += c; 
                }

                //if HTTP request has ended– 0x0D is Carriage Return \n ASCII 
                if (c == 0x0D) { 
                    client.println("HTTP/1.1 200 OK"); //send new page 
                    client.println("Content-Type: text/html"); 
                    client.println();

                    client.println("<HTML>"); 
                    client.println("<HEAD>"); 
                    client.println("<TITLE> ARDUINO ETHERNET SHIELD</TITLE>"); 
                    client.println("</HEAD>"); 
                    client.println("<BODY>"); 
                    client.println("<hr>"); 
                    client.println("<hr>"); 
                    client.println("<br>"); 
                    client.println("<H1 style=\"color:green;\">ARDUINO ETHERNET SHIELD — LED ON/OFF FROM WEBPAGE</H1>"); 
                    client.println("<hr>"); 
                    client.println("<br>");

                    client.println("<H2><a href=\"/?LEDON\"\">Turn On LED</a><br></H2>"); 
                    client.println("<H2><a href=\"/?LEDOFF\"\">Turn Off LED</a><br></H2>");

                    client.println("</BODY>"); 
                    client.println("</HTML>");

                    delay(10); 
                    //stopping client 
                    client.stop();

                    // control arduino pin 
                    if(readString.indexOf("?LEDON") > -1) //checks for LEDON 
                    { 
                        digitalWrite(ledPin, HIGH); // set pin high 
                    } 
                    else{ 
                        if(readString.indexOf("?LEDOFF") > -1) //checks for LEDOFF 
                        { 
                            digitalWrite(ledPin, LOW); // set pin low 
                        } 
                    } 
                    //clearing string for next read 
                    readString="";

                } 
            } 
        } 
    } 
}
