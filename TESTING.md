# Functional testing

## Validated environment

- DayZ Server and client version: 1.29.163709
- Host operating system: Linux Mint
- Official DayZ Tools executed through Wine
- Display used for the visual test: 1600x900 (16:9)

## Results

- PBO creation with FileBank: passed
- PBO prefix validation with BankRev: passed
- Zellno signature validation with DSCheckSignatures: passed
- Dedicated server Game script compilation: passed
- Dedicated server startup and mission initialization: passed
- Required-mod detection by the client: passed
- Client connection and character loading: passed
- Custom background during loading: passed
- Native DayZ logo, warning, hint and progress bar preserved: passed
- Client symbolic-link restoration script: passed

## Build validated

- PBO size: 13,304,925 bytes
- PBO SHA-256: `cbdcf2962c342dec4faee1e2535eee44df00020fcebf5e4ed9422dcc8c788868`
- Signature SHA-256: `0c41de9b320cf9990d442578eca3f0f0e4310fee0922cc4d8179aec220f3e257`
- Public key SHA-256: `33b1be0313d4c7aba3aa573128193dafe455c4b03d026bdd61eb3b525a7ba943`

These hashes identify the locally homologated release build.

## Remaining coverage

A real login queue with waiting players was not deliberately generated during this test. The queue integration uses the same background application path as the validated login-time interface and remains subject to a live queue test.
