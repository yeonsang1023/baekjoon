백준 {1157} - {단어 공부}



문제 링크: https://www.acmicpc.net/problem/1157



풀이 날짜: 2025-09-07



사용 언어: C



✏️ 풀이 아이디어

아스키 코드를 이해했어야함

a\[i] - 'a'같은 개념들 공부했음



헷갈렸던 부분

&nbsp;	for (int i = 0; i < size; i++) {

&nbsp;		if (a\[i] >= 'a')

&nbsp;			arr\[a\[i] - 'a']++;

&nbsp;		else arr\[a\[i] - 'A']++;

&nbsp;	}

만약 a\[i]가 c이면 아스키 코드로 

arr\[99-97]이렇게 되고 arr\[2]에 1을 더한다는 의미! 

이 반복문으로 가장 많이 사용된 알파벳을 구할 수 있었음



