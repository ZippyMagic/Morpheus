#include 
#include 
#include 
#include 

struct in_addr *find_valid_host(void)
{
struct in_addr *address = (struct in_addr *)malloc(sizeof(struct in_addr));

srand(time(NULL)); /* on initialise le générateur aléatoire */
address->s_addr = rand();

while (!isup(*address))
(address->s_addr)++;
/* ici, on utilise la routine isup() de nmap pour voir si la cible est up */

return address;
}
