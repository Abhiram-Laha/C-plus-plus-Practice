/* THE LEAD GAME */

int main(){

    int n,w;
    int lead=0,diff=0;
    int s1=0,s2=0;
    cin>>n;

    for (int i=0; i<n; i++){

        int p1,p2;
        cin>>p1>>p2;

        s1 += p1;
        s2 += p2;

        if (s1 > s2){

            diff=s1 - s2;
            if ( diff>1){
                w=1;
                lead=diff;
            }
        }
        else{
            diff=s2-s1;
            if (diff>1){
                w=2;
                lead=diff;
            }
        }
     
    }
    cout<<w<<" "<<lead;

return 0;
}