NB_PIZZA = 23
M = [
#    0       |     1       |     2     |   3    |   4   |     5     |       6      |      7      |     8    |   9  |    10      |  11   |       12    |      13     |      14   |     15   |     16     |         17      |     18  |    19    |    20     |     21     |     22
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       10     ,      20     ,     15   ,  15  ,    20      ,   5   ,       12    ,      30     ,      5    ,     12   ,     25     ,         10      ,     18  ,     5    ,     0     ,     12     ,      5      ], # 0 Nicolas
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      100    ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      ], # 1 Gregoire
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      90     ,     0    ,   0  ,     0      ,   70  ,       0     ,      80     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,     100    ,      0      ], # 2 Meir
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      50     ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      50    ,      0      ], # 3 Yann
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      50    ,      0      ], # 4 Kevin
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      90     ,     0    ,   0  ,     0      ,   70  ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,     1000    ,     0      ], # 5 nobody
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      ], #
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      ], #
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      ], #
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      ], #
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      ], #
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      ], #
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      ], #
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      ], #
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      ], #
    [     0       ,     0       ,     0     ,   0    ,   0   ,     0     ,       0      ,      0      ,     0    ,   0  ,     0      ,   0   ,       0     ,       0     ,      0    ,     0    ,      0     ,          0      ,     0   ,     0    ,     0     ,      0     ,      0      ], #
    [     1       ,     1       ,     1     ,   1    ,   1   ,     1     ,       1      ,      1      ,     1    ,   1  ,     1      ,   1   ,       1     ,       1     ,      1    ,     1    ,      1     ,          1      ,     1   ,     1    ,     1     ,      1     ,      1      ]  #
]
NB_HUMAIN = 6

def best_pizza(self, i, j, value):
    maxi = 0
    max_pizz = 0
    for p in range(NB_PIZZA):
        val = M[i][p]*M[j][p]
        if val > maxi:
            maxi = val
            max_pizz = p
            value = val


    return max_pizz

def normalize(self):
    for i in range(NB_HUMAIN):
        summ = 0
        for j in range(NB_PIZZA):
            M[i][j] += 0.0001
            summ += M[i][j]

        if summ > 0 :
            for j in range(NB_PIZZA):
                M[i][j] /= summ
                #std.cout << i << ":" << j << " val " << M[i][j] << std.endl




def compute_best_sub(self, i, summ, optipairspizza, optipairsvalue, pairs, best_summ, best_pairs):
    if i<NB_HUMAIN-1 and pairs[i]==-1:
        #Look for a free slot
        for j in (i+1, NB_HUMAIN):
            if i == 0:
                summ = 0
            if pairs[j]==-1:
                pairs[j] = i
                pairs[i] = j
                #std.cout << i << ":" << j << std.endl
                summ += optipairsvalue[i*NB_HUMAIN+j]
                compute_best_sub(i+1, summ, optipairspizza, optipairsvalue, pairs, best_summ, best_pairs)
                pairs[j]=-1
                pairs[i]=-1
        return

    i += 1
    if i!=NB_HUMAIN:
        return compute_best_sub(i, summ, optipairspizza, optipairsvalue, pairs, best_summ, best_pairs)

    else:
        #Check best combi
        if summ > best_summ:
            best_summ = summ
            print "best found {}".format(best_summ)
            for j in range(NB_HUMAIN):
                best_pairs[j] = pairs[j]
                #std.cout << j << ":" << pairs[j] << std.endl
    return

def main(self):
    normalize()

    #Compute opti pairs matrix
    for i in range(NB_HUMAIN):
        for j in range(NB_HUMAIN):
            if i != j:
                optipairspizza[i*NB_HUMAIN+j] = best_pizza(i,j, optipairsvalue[i*NB_HUMAIN+j])
                optipairsvalue[j*NB_HUMAIN+i] = optipairsvalue[i*NB_HUMAIN+j]
                optipairspizza[j*NB_HUMAIN+i] = optipairspizza[i*NB_HUMAIN+j]
                #std.cout << i << ":" << j << " best pizza : " << optipairspizza[j*NB_HUMAIN+i] << " value : " << optipairsvalue[j*NB_HUMAIN+i] << std.endl



    #Search for best combination
    for i in range(NB_HUMAIN):
        pairs[i] = -1

    summ = 0
    best_summ = -1
    compute_best_sub(0, summ, optipairspizza, optipairsvalue, pairs, best_summ, best_pairs)

    for i in range(NB_HUMAIN):
        print "{}:{} pizza : {}".format(i, best_pairs[i], optipairspizza[i*NB_HUMAIN+best_pairs[i]])

