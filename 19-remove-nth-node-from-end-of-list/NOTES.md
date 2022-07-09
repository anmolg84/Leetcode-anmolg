**19. Remove Nth Node From End of List**
1. Approach 1: Count number of nodes as n , traverse till n-n1 adn then change its next to next.next ; Time: O(N+N)
2. Approach 2: Using Slow Fast Pointers,Traverse fast till nth node from start and then move them simulataneously with slow pointer until fast->next!=NULL and then change link for slow next to slow next next; Time : O(N) {Tortoise Method}