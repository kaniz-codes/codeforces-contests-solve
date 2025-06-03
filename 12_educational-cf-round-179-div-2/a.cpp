int t;
cin >> t;
while (t--) 
{
    long long x, K;
    cin >> x;
    K=  (3*x+1) / 2 ;
    if(K+1>K)
    {
      cout << abs(K+1)<< endl;
    }
}
