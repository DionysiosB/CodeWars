class Tortoise{
public:
    static std::vector<int> race(int v1, int v2, int g){
    
        const int MINS = 60;
      const int SECS = 60;
    
        std::vector<int> t(3, -1);
        if(v1 >= v2){return t;}
      
      int dv = v2 - v1; t[0] = g / dv;
      g %= dv; g *= MINS; t[1] = g / dv;
      g %= dv; g *= SECS; t[2] = g / dv;
      
      return t;
    
    }
};
