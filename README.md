# Coding Practice

コーディング訓練用リポジトリ

主に AtCoder の過去問を解いている

## 新規

`setup.sh` を使うことで、テンプレートファイルのコピーとシンボリックリンクを貼ってくれる

```
./setup.sh CONTEST_NAME
```

## デバッグ

リポジトリルートの `debug.cpp` がデバッグ対象

シンボリックリンクを貼ることを想定

```sh
ln -s SOURCE debug.cpp
```

## 環境

- MinGW
  - gcc
  - gdb
  - [ln](https://qiita.com/ucho/items/c5ea0beb8acf2f1e4772)
- VSCode 拡張
  - C/C++

## Tips

### iostream 周り

- 同期を無効化

```
cin.tie(0);
ios::sync_with_stdio(false);
```

- `endl` -> `\n`

### 最小公倍数・最大公約数

```cpp
// 最大公約数
ll gcd(ll a, ll b)
{
  return b == 0 ? a : gcd(b, a % b);
}

// 最小公倍数
ll lcm(ll a, ll b)
{
  return a / gcd(a, b) * b;
}
```

### 全列挙

2^N 通りの列挙を行いたい場合

```cpp
REP(bit, 1 << N)
{
  bool on[N];
  REP(i, N)
  {
    on[i] = bit & (1 << i);
  }
  if (check(on))
    result++;
}
```

## Reference

- https://atcoder.jp/users/nshun
- https://kenkoooo.com/atcoder/?user=nshun&rivals=&kind=category
- http://torus711.hatenablog.com/entry/20131205/p1
