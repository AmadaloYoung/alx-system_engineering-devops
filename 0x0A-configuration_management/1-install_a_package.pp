#!/usr/bin/pup
# install flask from pip3.
package {'flask':
version => '2.1.0',
provider => 'pip3',
}
