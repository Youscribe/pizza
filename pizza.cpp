#include<iostream>

#define NB_PIZZA 23
float M[][NB_PIZZA] = {
//    0       |     1       |     2     |   3    |   4   |     5     |       6      |      7      |     8    |   9  |    10      |  11   |       12    |      13     |      14   |     15   |     16     |         17      |     18  |    19    |    20     |     21     |     22      
//marg. class.|marg. tomate.|marg. elem.|la reine|peppina|l'hawaienne|l'australienne|la forestière|l'indienne|kipika|la cannibale|saumeta| sweet chèvre|extravaganzza|l'orientale|Chickenita|bacon groovy|la steak & cheese|Hypnotika|la pêcheur|la composée|la savoyarde|la 4 fromages
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       10     ,      20     ,     15   ,  15  ,    20      ,   5   ,       12    ,      30     ,      5    ,     12   ,     25     ,         10      ,     18  ,     5    ,     0     ,     12     ,      5      }, // 0 Nicolas
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      100    ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      }, // 1 Gregoire
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      90     ,     0    ,   0  ,     0      ,   70  ,       0     ,      80     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,     100    ,      0      }, // 2 Meir
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      50     ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      50    ,      0      }, // 3 Yann
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      50    ,      0      }, // 4 Kevin
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      90     ,     0    ,   0  ,     0      ,   70  ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,     1000    ,     0      }, // 5 nobody
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      }, //
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      }, //
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      }, //
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      }, //
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      }, //
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      }, //
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      }, //
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      }, //
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      }, //
{     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      }, //
{     1       ,     1       ,     1     ,   1    ,   1   ,     1     ,       1      ,      1      ,     1    ,   1  ,     1      ,   1   ,       1     ,       1     ,      1    ,     1    ,      1     ,          1      ,     1   ,     1    ,     1     ,      1     ,      1      }  //
};
#define NB_HUMAIN 6

int best_pizza(int i,int j, float * value) {
  float max = 0;
	int max_pizz = 0;
	float val;
	for(int p=0;p<NB_PIZZA;++p) {
		val = M[i][p]*M[j][p];
		if(val>max) {
			max = val;
			max_pizz = p;
			*value = val;
		}	
	}
return max_pizz;
}
void normalize() {
float sum;
	for(int i = 0; i < NB_HUMAIN; ++i) {
		sum = 0;
		for(int j = 0; j < NB_PIZZA; ++j) {
			M[i][j] += 0.0001;
			sum += M[i][j];
		}
		if(sum > 0 ) {
			for(int j = 0; j < NB_PIZZA; ++j) {
				M[i][j] /= sum;
				//std::cout << i << ":" << j << " val " << M[i][j] << std::endl;
			}
		}
	}
}
void compute_best_sub(int i, float * sum, int * optipairspizza, float * optipairsvalue, int * pairs, float * best_sum, int * best_pairs) {
	if(i<NB_HUMAIN-1 && pairs[i]==-1) {
		//Look for a free slot
		for(int j=i+1; j < NB_HUMAIN;++j) {
			if(i==0) *sum = 0;
			if(pairs[j]==-1) {
				pairs[j] = i;
				pairs[i] = j;
				//std::cout << i << ":" << j << std::endl;
				*sum += optipairsvalue[i*NB_HUMAIN+j];
				compute_best_sub(i+1, sum, optipairspizza, optipairsvalue, pairs, best_sum, best_pairs);
				pairs[j]=-1;
				pairs[i]=-1;
						
			}
		}
		return;
	}
	i++;	
	if(i!=NB_HUMAIN) {
		return compute_best_sub(i, sum, optipairspizza, optipairsvalue, pairs, best_sum, best_pairs);
	} else {
		//Check best combi
		if(*sum > *best_sum) {
			*best_sum = *sum;
			std::cout << "best found " << *best_sum << std::endl;	
			for(int j=0; j < NB_HUMAIN; ++j) {
				best_pairs[j] = pairs[j];
				//std::cout << j << ":" << pairs[j] << std::endl;			
			}
		}
	}
	return;
}
int main() {
	int * optipairspizza = new int[NB_HUMAIN*NB_HUMAIN];
	float * optipairsvalue = new float[NB_HUMAIN*NB_HUMAIN];
	int * pairs = new int[NB_HUMAIN];
	int * best_pairs = new int[NB_HUMAIN];

	normalize();

	//Compute opti pairs matrix
	for(int i = 0; i < NB_HUMAIN; ++i) {
		for(int j = 0; j < NB_HUMAIN; ++j) {
			if(i != j) {
				optipairspizza[i*NB_HUMAIN+j] = best_pizza(i,j, &optipairsvalue[i*NB_HUMAIN+j]);
				optipairsvalue[j*NB_HUMAIN+i] = optipairsvalue[i*NB_HUMAIN+j];
				optipairspizza[j*NB_HUMAIN+i] = optipairspizza[i*NB_HUMAIN+j];
				//std::cout << i << ":" << j << " best pizza : " << optipairspizza[j*NB_HUMAIN+i] << " value : " << optipairsvalue[j*NB_HUMAIN+i] << std::endl;
			}
		}	
	}
	//Search for best combination
	for(int i = 0; i < NB_HUMAIN; ++i) {
		pairs[i] = -1;
	}
	float sum = 0;
	float best_sum = -1;
	compute_best_sub(0, &sum, optipairspizza, optipairsvalue, pairs, &best_sum, best_pairs);

	for(int i = 0; i < NB_HUMAIN; ++i) {
		std::cout << i <<":"<< best_pairs[i] << " pizza : " << optipairspizza[i*NB_HUMAIN+best_pairs[i]] << std::endl;
	}

delete[] optipairspizza;
delete[] optipairsvalue;
delete[] pairs;
delete[] best_pairs;
}
