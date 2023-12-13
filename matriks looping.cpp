//Muhammad Rafi Farhan
//202131145
#include <iostream>
#include <conio.h>
using namespace std;


int main(){
	// Deklarasi Looping
	int i,j,k,jumlah = 0;
	
	cout<<"==================================="<<endl;
	cout<<"                                 "<<endl;
	cout<<"                                   "<<endl;
	cout<<"         M A T R I K S             "<<endl;
	cout<<"                                   "<<endl;
	cout<<"               by:rafi /202131145"<<endl;
	cout<<"==================================="<<endl;
	
	int baris ;
	int kolom ;
	
	cout<<"Masukkan Nilai kolom dan Baris"<<endl<<endl;
	cout<<"Masukkan Baris [2 s/d 5]= ";cin>>baris;
	cout<<"Masukkan Kolom [2 s/d 5]= ";cin>>kolom;
	cout<<endl<<endl;
	
	//jumlah baris dan kolom di tampung sementara
	int A[baris][kolom], P[baris][kolom];
	int B[baris][kolom], Q[baris][kolom];
	int C[baris][kolom];
	int D[baris][kolom];
	int E[baris][kolom];
	
	cout<<"Matriks A :"<<endl;
	for(i=0; i<baris; i++){ 
		for(j=0; j<kolom; j++){ 
			cout<<"Masukkan nilai baris ke-["<<i + 1<<"] kolom ke-[" <<j + 1<<"] : ";
			cin >>A[i][j]; 
			
		}
	}
	cout<<endl<<endl;
	
	//inputan matriks B
	cout<<"Matriks B : "<<endl;
	for(i=0; i<baris; i++){ 
		for(j=0; j<kolom; j++){ 
			cout<<"Masukkan nilai baris ke-["<<i + 1<<"] kolom ke-[" <<j + 1<<"] : ";
			cin >>B[i][j];
		}
	}
	cout<<endl<<endl;
	
	//Hasil dari output matriks A
	cout<<"=     Matriks A     = "<<endl;
	for(i=0; i<baris; i++){
		for(j=0; j<kolom; j++){
			cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	
	//Hasil dari output matriks B
	cout<<"=   Matriks B   ="<<endl;
	for(i=0; i<baris; i++){
		for(j=0; j<kolom; j++){
			cout<<B[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	
	//transpose matriks A
	cout<<"=    Matriks A Transpose    ="<<endl;
	for(i=0; i<baris; i++){
		for(j=0; j<kolom; j++){
			cout<<A[j][i]<<"  ";
		} 						
		cout<<endl;
	}
	cout<<endl<<endl;
	
	//transpose matriks B
	cout<<"=    Matriks B Transpose    ="<<endl;
	for(i=0; i<baris; i++){
		for(j=0; j<kolom; j++){
			cout<<B[j][i]<<"  ";
		}						
		cout<<endl;
	}
	cout<<endl<<endl;	
	
	//Diagonal matriks A
	cout<<"=    Diagonal Matriks A     ="<<endl;
	if(baris == 2 && kolom ==2){ 
		cout<<A[0][0]<<" "<<A[1][1]<<"\n";
	}else if(baris == 3 && kolom == 3){
		cout<<A[0][0]<<" "<<A[1][1]<<" "<<A[2][2]<<"\n"; 
														
	}else if(baris == 4 && kolom == 4){
		cout<<A[0][0]<<" "<<A[1][1]<<" "<<A[2][2]<<" "<<A[3][3]<<"\n";
		
	}else if(baris == 5 && kolom == 5){
		cout<<A[0][0]<<" "<<A[1][1]<<" "<<A[2][2]<<" "<<A[3][3]<<" "<<A[4][4]<<"\n";
		
	}else{
		cout<<"Pilihan yang anda masukkan salah"<<endl;
	}
    cout<<endl<<endl;
	
	//Diagonal matriks B
    cout<<"=    Diagonal Matriks B     ="<<endl;
    if(baris == 2 && kolom ==2){
		cout<<B[0][0]<<" "<<B[1][1]<<"\n";
	}else if(baris == 3 && kolom == 3){
		cout<<B[0][0]<<" "<<B[1][1]<<" "<<B[2][2]<<"\n";
														
	}else if(baris == 4 && kolom == 4){
		cout<<B[0][0]<<" "<<B[1][1]<<" "<<B[2][2]<<" "<<B[3][3]<<"\n";
		
	}else if(baris == 5 && kolom == 5){
		cout<<B[0][0]<<" "<<B[1][1]<<" "<<B[2][2]<<" "<<B[3][3]<<" "<<B[4][4]<<"\n";
			
	}else{
		cout<<"Pilihan yang anda masukkan salah"<<endl;
	}
    cout<<endl<<endl;
    
    //Penjumlahan matriks A dan B
    cout<<"=== Penjumlahan Matriks A dan B === "<<endl;
    for(i=0; i<baris; i++){
		for(j=0; j<kolom; j++){
			C[i][j] = A[i][j] + B[i][j];//C[i][j] 
			cout<<C[i][j]<<"  ";
		}
       cout<<endl;
   }
   cout<<endl<<endl;
   
   //Pengurangan matriks A dan B
   cout<<"=== Pengurangan Matriks A dan B ==="<<endl;
   for(i=0; i<baris; i++){
		for(j=0; j<kolom; j++){
			D[i][j] = A[i][j] - B[i][j];
			cout<<D[i][j]<<"  ";
		}
       cout<<endl;
   }
   cout<<endl<<endl;
   
   //Perkalian matriks A dan B
   cout<<"=== Perkalian Matriks A dan B ==="<<endl;
    for(i=0; i<baris; i++){
		for(j=0; j<kolom; j++){
			for(k=0; k<baris; k++){
				jumlah = jumlah + A[i][k] * B[k][j]; 
			}
			E[i][j] = jumlah;
			jumlah = 0;
		}
    }
    for(i=0; i<baris; i++){
   		for(j=0; j<kolom; j++){
   			cout<<E[i][j]<<"  ";
	  	 }
	  	 cout<<endl;
  	}
   cout<<"=     F I N I S H     ="<<endl;
   return 0;
}


