#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<int> Vi;
//typedef tuple<int, int, int> T;
#define FOR(i,s,x) for(int i=s;i<(int)(x);i++)
#define REP(i,x) FOR(i,0,x)
#define ALL(c) c.begin(), c.end()
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

const int dr[4] = {-1, 0, 1, 0};
const int dc[4] = {0, 1, 0, -1};

${<if Problem.Description.Modulo}
  static const ll mod = ${Problem.Description.Modulo};
${<end}

struct ${ClassName} {
${<foreach Method.Params p}
  ${p.Type} ${p.Name};
${<end}
  ${Method.ReturnType} ${Method.Name}(${foreach Method.Params p , }${p.Type} _${p.Name}${end}) {
    ${foreach Method.Params p , }${p.Name} = _${p.Name}${end};
    return ${Method.ReturnType;zeroval};
  }
};

${CutBegin}
${<TestCode}
${CutEnd}
