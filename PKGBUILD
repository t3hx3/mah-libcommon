pkgname=libmahcommon
pkgver=1.0.0
pkgrel=1
pkgdesc="Common utility and plugin interface library for MAH"
arch=('x86_64')
url="https://github.com/t3hx3/mah-libcommon"
license=('MIT')
depends=('qt6-base') 
makedepends=('git' 'qt6-base' 'make' 'gcc')  

build() {
  cd "$srcdir"
  qmake6
  make
}

package() {
  cd "$srcdir"

  install -d "$pkgdir/usr/lib/mah"
  install -m755 lib/libmahcommon.so "$pkgdir/usr/lib/mah/libmahcommon.so"

  install -Dm644 ../LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"

  install -d "$pkgdir/etc/ld.so.conf.d"
  echo "/usr/lib/mah" > "$pkgdir/etc/ld.so.conf.d/mah.conf"

  install -D -m644 "$srcdir/mah-ldconfig.hook" "$pkgdir/usr/share/libalpm/hooks/mah-ldconfig.hook"
}
