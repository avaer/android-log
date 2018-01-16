const util = require('util');
const binding = require('node-gyp-build')(__dirname);

module.exports = {
  log() {
    binding.log(util.format.apply(null, arguments));
  },
};
