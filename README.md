출처 : http://blog.outsider.ne.kr/572
기초 사용법 정리 잘된 사이트 : http://rogerdudler.github.io/git-guide/index.ko.html

git 기본 명령어

git --version
현재 git의 버전을 확인합니다.

git init
현재 디렉토리에 git 저장소를 생성합니다.

git add 파일명
git add는 2가지를 하는데 untracked files의 파일들을 git가 추적하도록 하거나 파일은 수정했지만 아직 스테이징 영역에 올라가지 않은(Changed but not updated) 파일들을 스테이징 영역에 올립니다. -i 옵션을 주면 대화형모드가 시작되며 파일의 일부분만 선택해서 스테이징하는 것이 가능합니다. -p 옵션을 사용하면 -i 대화형모드없이 바로 패치모드를 사용할 수 있습니다.

git commit -m "커밋메시지"
스테이징 영역에 올라가 있는 파일들을 커밋합니다. -m 은 커밋메시지를 주는 옵션으로 여러 줄의 커밋메시지를 쓸 경우 -m 을 여러개 사용할 수 있습니다. -a 옵션을 사용하면 스테이징에 올리는 작업과 커밋을 동시에 할 수 있습니다.(추적되지 않는 파일은 추가하지 않습니다.) -m을 사용하지 않을때 -v옵션을 사용하면 편집기에 커밋하려는 변경사항의 다른점을 보여줍니다. 특정파일만 커밋하려면 마지막에 파일명을 추가해주면 됩니다.

git commit -C HEAD -a --amend
지정한 커밋의 로그메시지를 다시 사용하여 기존커밋을 수정합니다. -c를 사용하면 기존메시지를 수정할 수 있는 편집기를 실행해 줍니다.

git status
커밋되지 않은 변경사항을 조회합니다.

git diff
스테이징영역과 현재 작업트리의 차이점을 보여줍니다. --cached 옵션을 추가하면 스테이징영역과 저장소의 차이점을 볼 수 있다. git diff HEAD를 입력하면 저장소, 스테이징영역, 작업트리의 차이점을 모두 볼 수 있다. 파라미터로 log와 동일하게 범위를 지정할 수 있으며 --stat를 추가하면 변경사항에 대한 통계를 볼 수 있습니다.

git mv 파일명 새파일명
기존에 존재하는 파일을 새파일로 이동합니다. 변경이력은 그대로 유지합니다.

git checkout -- 파일명
아직 스테이징이나 커밋을 하지 않은 파일의 변경내용을 취소하고 이전 커밋상태로 돌립니다. svn에서 revert와 동일합니다.

원격저장소
git clone 저장소주소 폴더명
원격저장소를 복제하여 저장소를 생성합니다. 폴더명을 생략가능합니다.

git fetch
원격저장소의 변경사항 가져와서 원격브랜치를 갱신합니다.
 
git pull
git fetch에서 하는 원격저장소의 변경사항을 가져와서 지역브랙치에 합치는 작업을 한꺼번에 합니다. 파라미터로 풀링할 원격저장소와 반영할 지역브랜치를 줄 수 있습니다.

git push
파라미터를 주지 않으면 origin 저장소에 푸싱하며 현재 지역브랜치와 같은 이름의 브랜치에 푸싱합니다. --dry-run 옵션을 사용하면 푸싱된 변경사항을 확인할 수 있습니다. 로컬에서 tag를 달았을 경우에 기본적으로 푸싱하지 않기 때문에 git push origin 태그명이나 모든 태그를 올리기 위해서 git push origin --tags를 사용해야 합니다.

git remote add 이름 저장소주소
새로운 원격 저장소를 추가합니다.

git remote
추가한 원격저장소의 목록을 확인할 수 있습니다.

git remote show 이름
해당 원격저장소의 정보를 볼 수 있습니다.

git remote rm 이름
원격저장소를 제거합니다.
