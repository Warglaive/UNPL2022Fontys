void init(int n);
/* pre : n>0
   post: an in-memory data storage for n strings created
*/
void destroy();
/* pre : true
   post: allocated memory de-allocated
*/
bool insert(char* str);
/* pre : str!=null and contains a string STR (\0 as sentinel), not
		 necessary dynamically allocated, storage exists
   post: string STR stored in an available free storage slot and 1
		 returned, or 0 returned if there are no free storage slots.
*/
void deleteStr(char* str);
/* pre : str!=null and contains a string STR (\0 as sentinel), not
		 necessary dynamically allocated, storage exists.
   post: each stored string which matches STR removed, and storage
		 slot set free
*/
void print();
/* pre : storage exists
   post: stored strings printed, one string per line
*/