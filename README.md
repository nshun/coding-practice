# Practice Coding

コーディング訓練用リポジトリ

主に AtCoder の過去問を解いている

## デバッグ

リポジトリルートの `debug.cpp` がデバッグ対象

シンボリックリンクを貼ることを想定

```sh
ln -s SOURCE debug.cpp
```

## 環境

- MinGW
  + gcc
  + gdb
- VSCode 拡張機能
  + C/C++

## Tips

### iostream 周り

- 同期を無効化
```
cin.tie(0);
ios::sync_with_stdio(false);
```

- `endl` -> `\n`
