
            continue;
        }
        if(k==1){
            res=max(a[0],a[n-1]);
            if(res==a[0]){
                cout<<a[0]+a[n-2]<<endl;
            }
            else{
                cout<<a[n-1]+a[1]<<endl;
            }
            continue;
        }
        sort(a.begin(), a.end(), greater<int>());
        long long sum = 0;
        for (int i = 0; i < k; i++){
            sum += a[i];
        } 
        long long last = a[k];
        cout << sum + last << endl;
    }
    return 0;
}