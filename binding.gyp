{
  "targets": [
    {
      "target_name": "android-log",
      "sources": [ "android-log.cc" ],
      "ldflags": [ '-llog' ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
      ],
    }
  ]
}
