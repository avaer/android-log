{
  "targets": [
    {
      "target_name": "a_native_example",
      "sources": [ "a_native_example.cc" ],
      "ldflags": [ '-llog' ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
      ],
    }
  ]
}
