std::vector<long> numbersWithDigitInside(long x, long d){
    std::vector<long> result;
    
    std::vector<long> nums;
    for(int p = 1; p <= x; p++){
      
      bool inc(0);
      int u = p;
      
      while(u > 0){
        if(u % 10 == d){inc = true; break;}
        u /= 10;
      }
      
      if(inc){nums.push_back(p);}
    }
    
    result.push_back(nums.size());
    long sum(0);
    long prod = (nums.size() > 0) ? 1 : 0;
    for(size_t p = 0; p < nums.size(); p++){sum += nums[p]; prod *= nums[p];}
    result.push_back(sum); result.push_back(prod);
    
    return result;
}
