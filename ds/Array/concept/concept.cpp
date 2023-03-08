->Multi-dimensional array can be declared in 4 ways:
int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11};
or,
int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
or,
int x[3][4];
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
        cin >> x[i][j];
    }
}
or,
int** x = new int*[3];		//double pointer
for(int i = 0; i < 3; i++){
    x[i] = new int[4];
    for(int j = 0; j < 4; j++){
        cin >> x[i][j];
    }
}

->3D array:
int x[2][3][4] = 	//two arrays, 3 rows, 4 columns
 { 
   { {0,1,2,3}, {4,5,6,7}, {8,9,10,11} },
   { {12,13,14,15}, {16,17,18,19}, {20,21,22,23} }
 };
 
 ->Traversing 3D array:
 for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << "Element at x[" << i << "][" << j
                     << "][" << k << "] = " << x[i][j][k]
                     << endl;
            }
        }
    }
    
    
