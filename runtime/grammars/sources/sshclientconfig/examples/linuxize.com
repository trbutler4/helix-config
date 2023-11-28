# source: https://linuxize.com/post/using-the-ssh-config-file/
# archive: https://web.archive.org/web/20220313081615/https://linuxize.com/post/using-the-ssh-config-file/

Host targaryen
    HostName 192.168.1.10
    User daenerys
    Port 7654
    IdentityFile ~/.ssh/targaryen.key

Host tyrell
    HostName 192.168.10.20

Host martell
    HostName 192.168.10.50

Host *ell
    user oberyn

Host * !martell
    LogLevel INFO

Host *
    User root
    Compression yes
