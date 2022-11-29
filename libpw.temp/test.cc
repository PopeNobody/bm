#include <iostream>
#include <string>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <pair>

using namespace std;

struct passwd *getpwnam(const char *name);
struct passwd *getpwuid(uid_t uid);

int getpwnam_r(const char *name, struct passwd * pwd,
    char * buf, size_t buflen,
    struct passwd ** result);

int getpwuid_r(uid_t uid, struct passwd * pwd,
    char * buf, size_t buflen,
    struct passwd ** result);

pair<const char *, const char *> map_passwd() {
  int fd = open("/etc/passwd",O_RDONLY);
  size_t size=lseek(fd,0,SEEK_END);
  void *beg=mmap();
  return 0;
};
struct passwd *getpwent();

struct void setpwent();
}
struct void endpwent();

int main(int, char**) {
  struct passwd *pw = getpwnam("nn");
  cout << pw->pw_name << endl;
  cout << pw->pw_uid << endl;
  cout << map_passwd() << endl;
  return 0;
}
