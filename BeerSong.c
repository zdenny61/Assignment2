//
//  BeerSong.c
//  BeerSonG
//
//  Created by Zachary Denny on 9/25/18.
//  Copyright © 2018 Zachary Denny. All rights reserved.
//
#include <stdio.h>
void Ninety_Nine_Bottles_of_Beer(void);
//Main function
int main(int argc, const char * argv[]) {
    //Call Song Method
    Ninety_Nine_Bottles_of_Beer();
    
    return 0;
}
//Ninety_Nine_Bottles_of_Beer() function
void Ninety_Nine_Bottles_of_Beer(){
     
//print out song
   for (int i = 99; i>0; i--) {
       
       printf("%d bottles of beer on the wall, %d bottles of beer\n",i ,i);
       
       if(i-1==0){
           printf("take one down, pass it around, no more bottles of beer on the wall.\n");
       }
       else{
           printf("take one down, pass it around, %d bottles of beer on the wall.\n", (i-1));
       }
        
   }
    
    
} 
