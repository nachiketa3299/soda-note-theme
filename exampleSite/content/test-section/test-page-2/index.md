---
title: "Test Page"
toc: true
date: 2025-05-24
lastmod: 2025-05-29

mathjax: true
plantuml: true
categories: ["카테고리 1"]
tags: []
---

# Typography

마크다운 문법으로 사용한 **굵은 글씨**이고, *기울인 글씨*입니다.  


아래 줄부터 마크다운 문법 인용구 시작입니다.

> 인용구 내용입니다.  
> 이렇게 개행도 됩니다.

마크다운 문법 인용구가 끝났습니다.

# Todo

할 일 목록의 경우 다음처럼 표현됩니다.
- [ ] 어쩌구
- [ ] 저쩌구

# Mark

하이라이트는 ==이것처럼 **표시** 된다고 *볼* 수 `있습니다`.==

# Code Rendering

## Inline

`Inline-code`는 이렇게 표현됩니다.  

## Block

그냥 코드 펜스

```cpp
int main() {
  std::cout << "Hello, World!" << '\n';
}
```

커스텀 숏코드

{{<hl syntax="cpp" options="hl_lines=2, style=emacs">}}
int main() {
  std::cout << "Hello, World!" << '\n';
}
{{</hl>}}

아래는 소스 파일 불러온 것

{{<hls source="assets/testcode.cc" syntax="cpp">}}

어쩌구입니다.

{{<hl options="lineNos=false" syntax="cpp">}}
int main() {
  "Test!";
}
{{</hl>}}

# MathJax

수식은 $O(N)$처럼 렌더링 됩니다.

블럭 수식은 다음처럼 렌더링 된다.

$$
x = X + 1 \\\
x = y + 3
$$

# PlantUML

{{<puml>}}

class A {
  int a;
  int b;
}

A -> C

{{</puml>}}

# YouTube

{{<youtube id="hTZTEt6UwaA" class="ytb">}}

# Image

![](./assets/00.jpg)

# Caption

{{<caption text="LaText 테스트">}}
$$
X = X + 1
$$
{{</caption>}}

{{<caption text="코드 블럭 테스트">}}
```cpp
int a {0};
```
{{</caption>}}

{{<caption text="인용구 테스트">}}
> 여기에는 어떻게?
{{</caption>}}

{{<caption text="Admonition 테스트">}}
{{<admo title="안녕!">}}
안녕!
{{</admo>}}
{{</caption>}}

OK

{{<caption text="puml 테스트" noparse="true">}}
{{<puml>}}

class A {
  int a;
  int b;
}

A -> B

{{</puml>}}
{{</caption>}}

{{<caption text="youtube 테스트" noparse="true">}}
{{<youtube id="hTZTEt6UwaA" class="ytb">}}
{{</caption>}}

{{<caption text="표 테스트">}}
|table|text|
|:-: |:-: |
|Hello | World |

{{</caption>}}

{{<caption text="이미지 캡션">}}

![](./assets/00.jpg)

{{</caption>}}

