# ric-proto
gRPC/Protocol Buffers protofiles for ric services

## compile

```bash
$ docker run --rm -v $(pwd):/ric-proto docker.pkg.github.com/rightech/ric-proto/compiler:latest
```

To access docker image you should generate [github token](https://github.com/settings/tokens) with scope: `repo`,`read:packages`.
