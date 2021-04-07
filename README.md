**NOTICE**: The source code of this library is pending [export control](https://en.wikipedia.org/wiki/Export_control). We hope that this notice will not be visible to any readers of the published paper because the process is already finished and the source code available.

# libpabc

This is the source code repository of libpabc.

One problem with the concept of aggregated claims [1] in combination with JSON-Web-Tokens is excessive disclosure of information.
Anonymous credentials such as Camenisch-Lysyanskaya [2] using blind signature schemes such as BBS+ [3] can be used to enable selective disclosure of attributes, but such signature schemes are not explicitly defined for the OIDC Aggregated Claims standard.

For the [DISSENS](https://wiki.geant.org/display/NGITrust/Funded+Projects+Call+2#FundedProjectsCall2-DISSENS) project, we have implemented libpabc:
A library that supports non-interactive zero knowledge proofs for anonymoud credentials using pairings on a BLS12-381 curve [4].
In combination with a suitable SSI system, users can selectively disclose attributes from a credential without invalidating the issuer's signature.

1. https://openid.net/specs/openid-connect-core-1_0.html#AggregatedExample
2. J. Camenisch, M. Drijvers, and A. Lehmann. “Anonymous attestation using the strong diffie hellman assumption revisited”. In: International Conference on Trust and Trustworthy Computing. Springer. 2016, pp. 1–20.
3. Au, Man Ho, et al. "Constant-size dynamic k-times anonymous authentication." IEEE Systems Journal 7.2 (2012): 249-261.
4. S. Bowe. BLS12-381: New zk-SNARK Elliptic Curve Construction. https://electriccoin.co/blog/new-snark-curve/
