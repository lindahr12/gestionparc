#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct voiture 
{
	int  mat;
	char modele[10];
	int kilo;
	char etat;
	
};
   int nbre=0;
	struct voiture parc[20];
	void ajouter_voiture();
	void supprimer_voiture();
	void afficher_etatparc();
	void chercher_voiture();
	void modifier_voiture();
	void quitter();
	
void menu()
{

	struct voiture v;
	
	int choix;
	int nbre;
    system("color F9"); 
    system("cls");
     system("COLOR 1E");

	printf("\n\n\n\n  \t            GESTION PARC De lOCATION DE VOITURE ");
		printf("\n \t   \t      Realise par:  HRICHI LINDA \n\n");
	
	printf("\n\n");
	for(int s=0;s<80;s++)
			putchar(260);
			for(int s=0;s<80;s++)
			putchar(260);
	printf("\n");
        printf(" \t                     ________________                           \n");
		printf(" \t                   /                  --<---<---<--             \n");
		printf(" \t            _ ___/                     --<---<---<--            \n");
		printf("  \t         |__ __                  ______ --<---<---<--         \n");
	    printf("  \t                (__)----------(__)                             \n");
		  
	for(int s=0;s<80;s++)
			putchar(260);
     	for(int s=0;s<80;s++)
			putchar(260);
		
		printf("      ษอออออออออออออออออออออออออMENUอออออออออออออออออออออออออออออป\n");
		printf("      บ   -----------------------------------------------------  บ\n");
		printf("      บ  (  | 1 | Ajouter une voiture                          ) บ\n");
        printf("      บ                                                          บ\n");
        printf("      บ  (  | 2 | Supprimer une voiture                        ) บ\n");
        printf("      บ                                                          บ\n");
        printf("      บ  (  | 3 | Etat de parc de voiture                      ) บ\n");
        printf("      บ                                                          บ\n");
        printf("      บ  (  | 4 | Chercher une voiture                         ) บ\n");
        printf("      บ                                                          บ\n");
        printf("      บ  (  | 5 | Modifier une voiture                         ) บ\n");
        printf("      บ                                                          บ\n");
		printf("      บ  (  | 6 | Quitter le programme                         ) บ\n");
	    printf("      บ   -----------------------------------------------------  บ\n");
        printf("      ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n");
	
	 puts("donner  votre choix");
	 scanf("%d",&choix);


if(choix==1) ajouter_voiture();
else if(choix==2) supprimer_voiture();
else if(choix==3) afficher_etatparc();
else if(choix==4) chercher_voiture();
else if(choix==5) modifier_voiture();
else quitter();
}
///////

int verifmat(int x) {
	for (int i=0;i<nbre;i++) { 
		if  ( x ==parc[i].mat ) {
		return 1 ;
		}
	}
		return 0 ; 
}


/***********************Ajout voiture*****************/
struct voiture v;
void ajouter_voiture()
{  
    system("cls");
    
        printf("              อออออออออออออออออออออออออออออออออออออออออออออออออออ\n");
	 
	   	printf("                             Ajoutter_voiture                 \n");
	 
	 	printf("              อออออออออออออออออออออออออออออออออออออออออออออออออออ");

    fflush(stdin);
    do{
    puts(" \n veuillez entrer un nouveau matricule");
    scanf("%d",&parc[nbre].mat);
    fflush(stdin);
    
    }while (verifmat(parc[nbre].mat) ==1);
    puts("donner le modele ");
    scanf("%s",&parc[nbre].modele);
    fflush(stdin);
	puts("donner le kilometrage");
	scanf("%d",&parc[nbre].kilo);
	fflush(stdin);	
	do{
    puts("donner l'etat de cette voiture l/d");
	scanf("%c",&parc[nbre].etat );	
	fflush(stdin);
      }while (parc[nbre].etat!='l' && parc[nbre].etat!='d');
	nbre++;
	puts("\n l'ajout est effectue avec succes \n");
	puts("S'il vous plait appuyez sur n'importe quel bouton pour revenir au MENU ");
	getch();
	menu();

}
/***********************suppression voiture*****************/
void supprimer_voiture()
{    
     int i,pos=-1;
     int mat;
     system("cls");
      printf("              อออออออออออออออออออออออออออออออออออออออออออออออออออ\n");
	 
	   	printf("                             Supprimer_voiture                \n");
	 
	 	printf("              อออออออออออออออออออออออออออออออออออออออออออออออออออ");
    printf("\n Veuillez entrer le matricule de voiture souhaite supprimer \n");
	scanf("%d",&mat);
	i=0;
	while (i<nbre && parc[i].mat !=mat){
		i++;
	}
	if(i<nbre){
		for(i;i<nbre;i++)
		parc[i]=parc[i+1];
		nbre--;
		printf("voiture supprime! \n");
	}
	else{
		printf("voiture n'existe pas dans le parc \n");
	}
	
	puts("S'il vous plait appuyez sur n'importe quel bouton pour revenir au MENU ");
	getch();
	menu();
}

/***********************afficher voiture*****************/

	void afficher_etatparc()
{
	system("cls");
	int i;
	printf("ออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n");
	
		printf("Num_voiture\t|matricule\t|modele\t\t|kilometrage\t|etat\t \n");
	for(i=0;i<nbre;i++)
	{
		
		printf("%d\t\t|%d\t\t|%s\t\t|%d\t\t|%c \n",i+1,parc[i].mat,parc[i].modele,parc[i].kilo,parc[i].etat);
		
	}
	printf("ออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n");
	
    puts("S'il vous plait appuyez sur n'importe quel bouton pour revenir au MENU\n ");
	getch();
	menu();
}
///***************************************chercher voiture********************************///
 void chercher_voiture()
 {   int mat;
     int i;
    int c;
     system("cls");
      printf("              อออออออออออออออออออออออออออออออออออออออออออออออออออ\n");
	 
	   	printf("                            Chercher_voiture                 \n");
	 
	 	printf("              อออออออออออออออออออออออออออออออออออออออออออออออออออ");
    printf(" \n Entrez le numero de matricule de la voiture a recherche: \n");
	scanf("%d",&mat);
   	while (i<nbre && parc[i].mat !=mat){
		i++;
	}
	if(i<nbre)
	{
		printf("ออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n");
		printf("Numvoiture\t|matricule\t|modele\t\t|kilometrage\t|etat\t \n");
		printf("%d\t\t|%d\t\t|%s\t\t|%d\t\t|%c \n",i+1,parc[i].mat,parc[i].modele,parc[i].kilo,parc[i].etat);
     	printf("ออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n");
	    if(parc[i].etat == 'l')
	    puts("Cette voiture est actuellement louee \n");
	    else 
	    puts("Cette voiture est disponible \n ");
	}
	else
	{
		printf("la voiture n'existe pas dans le parc \n");
	}
	puts("S'il vous plait appuyez sur n'importe quel bouton pour revenir au MENU ");
	getch();
	menu();
	
 }
 ////////////////////**********************modifier voiture **************************//////////////////////////
 void modifier_voiture()
 {
 	int mat ,i;
 	int c;
 
    system("cls");
     printf("              อออออออออออออออออออออออออออออออออออออออออออออออออออ\n");
	 
	   	printf("                             Modifier_voiture                 \n");
	 
	 	printf("              อออออออออออออออออออออออออออออออออออออออออออออออออออ");
 	printf("\n Entrez un mat:");
	scanf("%d",&mat);
   	while (i<nbre && parc[i].mat !=mat){
		i++;
	}
	if(i<nbre)
	{
		printf("\tdonner le numero de champ a modifier \n");
		printf("\tpour modifier le matricule tapez 1\n");
		printf("\tpour modifier le modele tapez 2 \n ");
		printf("\tpour modifier le kilometrage tapez 3\n ");
	    printf("\tpour changer l'etat tapez 4 \n \n");
		do 
			{
			printf("\tVeuillez entrer l'un de ces taches \n");
			scanf("%d",&c);
			}while (c !=1 && c!=2 && c!=3 && c!=4);
		    	switch(c)
						{
						case 1:{ do{
                                 puts(" \n veuillez entrer un nouveau matricule");
                                 scanf("%d",&parc[i].mat);
                                 fflush(stdin);
    
                                 }while ((verifmat(parc[i].mat)) !=1); 
						        break;}
						case 2:{ printf("\tModele:%s \t Veuillez tapez la nouvelle modele : ",parc[i].modele);fflush(stdin);
						        scanf("%s",&parc[i].modele);
								break;}          
						case 3:{ printf("\tKilometrage:%d \t Veuillez tapez un nouveau kilometrage: ",parc[i].kilo);fflush(stdin);
						       scanf("%d",&parc[i].kilo);
							   break;}
						case 4:{
							do{
						       printf("\tEtat:%c \t  Veuillez tapez un nouveau etat 's' ou 'd': ",parc[i].etat);fflush(stdin);
						       scanf("%c",&parc[i].etat);
						     }while(parc[i].etat != 'l' && parc[i].etat != 'd' );
						       
							   break;}
						} 
						
			printf("modification effectu้e avec succes");   
	   	}
 
	else
	{
		printf("la voiture n'existe pas");
	}	

 	puts("S'il vous plait appuyez sur n'importe quel bouton pour revenir au MENU ");
	getch();
	menu();
 	
 	
 }
//////////////*****************QUITTER********************///////////
void quitter()
{
	system("cls");
         printf("              อออออออออออออออออออออออออออออออออออออออออออออออออออ\n");
	 
	   	printf("                             Au revoir ....                \n");
	 
	 	printf("              อออออออออออออออออออออออออออออออออออออออออออออออออออ");	
	
}

int main(){
	
    menu();

}



