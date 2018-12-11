#include "isEmpty.h"

/***************************************************
This function search the parameter value in tab_full
found = return 0
else  = return 1
****************************************************/

#define SIZE_TAB_FULL 299

int isEmpty(int tile_number){

  // this table contain the number of empty tiles
  int tab_full[SIZE_TAB_FULL] = {0,1,2,3,7,8,9,10,11,12,13,14,23,24,25,26,30,31,32,33,34,35,36,37,46,47,48,49,51,53,54,55,56,57,58,59,60,69,70,71,80,81,82,92,93,94,95,96,97,98,99,100,101,102,103,104,105,115,
     117,118,119,120,121,122,123,124,125,126,138,139,140,141,142,143,144,145,146,147,148,149,159,160,161,162,163,164,165,166,167,168,169,170,171,172,182,183,184,185,186,187,188,189,190,191,192,193,
     194,204,205,207,209,210,211,212,213,214,215,216,217,227,228,231,232,233,234,235,236,237,238,239,244,245,246,247,253,254,255,256,257,258,259,260,261,266,267,268,269,275,276,277,278,279,280,281,
     282,283,288,289,290,291,292,298,299,300,301,302,303,304,339,340,341,342,349,350,351,361,362,371,372,379,380,387,388,389,395,396,397,398,399,404,405,406,407,408,409,410,411,412,413,
     414,415,416,417,418,419,420,421,422,423,424,425,426,427,428,429,430,431,432,433,434,435,436,437,438,439,440,441,442,443,444,445,446,447,448,449,450,451,452,453,454,455,456,457,458,459,460,461,
     462,463,464,465,466,467,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,484,485,486,487,488,489,490,491,492,493,494,495,496,497,498,499,500,501,502,503,504,505,506,507,508,509,
     510,511,512};

  for(int i = 0 ; i < SIZE_TAB_FULL ; i++){
    if(tab_full[i] == tile_number){
      return 0;
    }
  }
  return 1;
}
