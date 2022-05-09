#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef struct {
   int v;
   int w;
   float d;
} Item;
void input(Item items[],int sizeOfItems) {
   cout << "Enter total "<< sizeOfItems <<" item's values and weight" <<
   endl;
   for(int i = 0; i < sizeOfItems; i++) {
      cout << "Enter "<< i+1 << " V ";
      cin >> items[i].v;
      cout << "Enter "<< i+1 << " W ";
      cin >> items[i].w;
   }
}
void display(Item items[], int sizeOfItems) {
   int i;
   cout << "values: ";
   for(i = 0; i < sizeOfItems; i++) {
      cout << items[i].v << "\t";
   }
   cout << endl << "weight: ";
   for (i = 0; i < sizeOfItems; i++) {
      cout << items[i].w << "\t";
   }
   cout << endl;
}
bool compare(Item i1, Item i2) {
   return (i1.d > i2.d);
}
float knapsack(Item items[], int sizeOfItems, int W) {
   int i, j;
   float twvlu = 0, twght = 0;
   for (i = 0; i < sizeOfItems; i++) {
      items[i].d = (float)items[i].v / items[i].w; 
   }
   sort(items, items+sizeOfItems, compare);
   
   for(i=0; i<sizeOfItems; i++) {
      if(twght + items[i].w<= W) {
         twvlu += items[i].v ;
         twght += items[i].w;
      } else {
         int wt = W-twght;
         twvlu += (wt * items[i].d);
         twght += wt;
         break;
      }
   }
   cout << "Total weight in bag " << twght<<endl;
   return twvlu;
}
int main() {
   int W;
   Item items[4];
   input(items, 4);
   cout << "Entered data \n";
   display(items,4);
   cout<< "Enter Knapsack weight \n";
   cin >> W;
   float mxVal = knapsack(items, 4, W);
   cout << "Max value for "<< W <<" weight is "<< mxVal;
}