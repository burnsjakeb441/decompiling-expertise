# decompiling-expertise
Decompiling Expertise: How Reverse Engineers Think and Learn

Status: In progress. Currently in Phase 0 (lab setup and C foundations).

I'm studying the cognitive psychology of expertise in reverse engineering: how people learn to read machine code, and how experts think differently from novices.

Core question: How do people come to understand machine code, and what changes in their perception, memory and strategy as they go from novice to expert?

Abstract

Decompiling Expertise is a two-year independent study of reverse engineering: learning to read compiled x86-64 code, and studying how that skill works. The technical track builds an analysis lab, a reference of compiler idioms, malware analysis reports and detection rules. The research track asks how reverse engineers understand binaries. A content analysis of public solutions to Mandiant's Flare-On reverse-engineering challenges, written by professional analysts, experienced community solvers and newer solvers, tests whether strategies differ by expertise and challenge difficulty, using program comprehension theory and a codebook with measured inter-rater reliability. A single-case experiment on my own skill acquisition tests whether retrieval practice outperforms rereading for learning compiler idioms, and tracks how my analysis strategies change over time. The project combines reverse engineering with methods from cognitive psychology.

Roadmap
Phase	Focus
0	Analysis lab, C foundations and project setup
1	x86-64 assembly, ELF and the Compiler Idiom Atlas
2	Binary feature extraction toolkit (Python)
3	Compiler provenance models (machine learning)
4	Windows/PE internals and malware analysis
5	Detection engineering with YARA (or vulnerability research)
6	Capstone: two studies of reverse-engineering expertise

Each phase ends with a deliverable and an exit gate, a practical demonstration of the skills it builds.

Research design
Main study: a content analysis of public Flare-On write-ups, comparing the strategies of professional analysts, experienced solvers and newer solvers, coded with a theory-based codebook and checked with a second coder (Cohen's kappa).

Companion study: a single-case experiment on my own learning, comparing retrieval practice and rereading for recognizing compiler idioms, with a control set and delayed retention tests.

Repository layout
Folder	Contents
docs/	Compiler Idiom Atlas, feature codebook, reports and papers
extractor/	Python feature extractor and command-line tool
tests/	pytest suite and continuous integration
dataset/	Dockerfiles, build matrix and source list (never binaries)
models/	Training scripts and notebooks
rules/	YARA rules with positive and negative test lists
capstone/	Codebook, write-up index (links only), analysis and self-study logs
notebook/	Dated session logs
Safety and ethics
No malware is ever stored here. Samples are referenced by SHA-256 hash and a public source link only.
All malware analysis happens in an isolated, snapshot-based lab with no internet access.
Write-ups by others are linked and cited, never republished.
Vulnerability work produces root-cause analyses, not working exploits for unpatched software; anything new goes through coordinated disclosure.
Research involving people follows my university's IRB guidance.
License

Code in this repository is released under the MIT License.
