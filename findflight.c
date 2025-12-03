  #include <stdio.h>
struct FlightEntry
{
char flightID[10];
char origin[30];
char destination[30];
char status[30];
};
#define TOTAL_FLIGHTS 30
//Array of Structure to hold the Directory
struct FlightEntry flightDirectory[TOTAL_FLIGHTS] = {
{"EK345", "New York (JFK)", "London (LHR)", "In Flight"},
{"AI101", "New Delhi (DEL)", "Mumbai (BOM)", "Landed"},
{"BA202", "Dubai (DXB)", "Paris (CDG)", "Delayed (2 hours)"},
{"SQ888", "Singapore (SIN)", "Tokyo (NRT)", "Scheduled"},
{"LH550", "Frankfurt (FRA)", "Mexico City (MEX)", "Departed"},
{"AF112", "Paris (CDG)", "New York (JFK)", "Scheduled"},
{"CX777", "London (LHR)", "Singapore (SIN)", "In Flight"},
{"EY404", "Doha (DOH)", "Rome (FCO)", "Landed"},
{"TK190", "Istanbul (IST)", "Cape Town (CPT)", "Departed"},
{"CA981", "Beijing (PEK)", "San Francisco (SFO)", "Delayed (45 mins)"},
{"TG611", "Doha (DOH)", "Bangkok (BKK)", "In Flight"},
{"IB300", "Madrid (MAD)", "Doha (DOH)", "Scheduled"},
{"QF001", "Doha (DOH)", "Sydney (SYD)", "Boarding"},
{"FZ515", "Dubai (DXB)", "Doha (DOH)", "Landed"},
{"UA808", "Doha (DOH)", "Los Angeles (LAX)", "Delayed (1 hour)"},
{"EK215", "Dubai (DXB)", "Los Angeles (LAX)", "In Flight"},
{"BA142", "New Delhi (DEL)", "London (LHR)", "Scheduled"},
{"LH457", "Los Angeles (LAX)", "Frankfurt (FRA)", "Departed"},
{"AF339", "Montreal (YUL)", "Paris (CDG)", "Delayed (1 hour)"},
{"SQ322", "Singapore (SIN)", "London (LHR)", "In Flight"},
{"AI101", "New York (JFK)", "New Delhi (DEL)", "Landed"},
{"CX256", "London (LHR)", "Hong Kong (HKG)", "Scheduled"},
{"JL043", "Tokyo (HND)", "Paris (CDG)", "Boarding"},
{"QR002", "London (LHR)", "Sydney (SYD)", "In Flight"},
{"UA890", "San Francisco (SFO)", "Singapore (SIN)", "Delayed (45 mins)"},
{"DL201", "Atlanta (ATL)", "Johannesburg (JNB)", "Departed"},
{"KE702", "Tokyo (NRT)", "Seoul (ICN)", "Landed"},{"NZ001", "Auckland (AKL)", "Los Angeles (LAX)", "Scheduled"},
{"VS301", "London (LHR)", "New Delhi (DEL)", "In Flight"},
{"ET605", "Addis Ababa (ADD)", "Toronto (YYZ)", "Delayed (30 mins)"}
};
int findflight(char searchID[]); //Function Declaration
int main ()
{
char input [10];
printf(" - Welcome to FindMyFlight - \n");
printf("\n- Here's the List of all Current Flights -\n");
printf(" EK345 AI101 BA202 SQ888 LH550\n");
printf(" AF112 CX777 EY404 TK190 CA981\n");
printf(" TG611 IB300 QR001 FZ515 UA808\n");
printf(" EK215 BA142 LH457 AF339 SQ322\n");
printf(" AI101 CX256 JL043 QF002 UA890\n");
printf("\n--- FLIGHT STATUS ---\n");
printf("Enter the Flight ID to search, or Enter '0' to exit the Directory.\n");
while (1) // While loop to get the input
{
printf("\nEnter Flight ID: ");
scanf("%s", input);
if (input[0] == '0' && input[1] == 0) // Exit
{
printf("\nThank you for connecting with FindMyFlight!\n");
break;
}
// Linear Search across the Directory
if (!findflight(input))
{
printf("\n**MESSAGE: Flight ID '%s' not found in the directory.**\n", input);
}
}
return 0;
}
{
int findflight(char searchID[]) for (int i = 0; i < TOTAL_FLIGHTS; i++)
// Function Call{
int match = 1;
for (int j = 0; ; j++)
{
char a = searchID[j];
char b = flightDirectory[i].flightID[j];
if (a != b)
{
match = 0;
break;
} // Not in the Directory
if (a == 0)
break; // End of the Directory, no match
}
{
if (match) // Found in the Directory
printf("Flight ID: %s \n", flightDirectory[i].flightID);
printf("Route: %s -> %s\n", flightDirectory[i].origin, flightDirectory[i].destination);
printf("Current Status: **%s**\n", flightDirectory[i].status);
return 1; // Return to 1 and Display Details again till use enters 0
}
}
return 0;
}
