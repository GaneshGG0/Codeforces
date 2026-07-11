<h2><a href="https://codeforces.com/contest/1791/problem/A" target="_blank" rel="noopener noreferrer">1791A — Codeforces Checking</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1791A](https://codeforces.com/contest/1791/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Codeforces Checking</div><div id="cf-note-wrapper" style="display: flex; align-items: center; justify-content: center; margin-top: 10px; width: 100%;"><button class="cf-ext-note-btn" style="border: 1px solid rgba(120, 120, 120, 0.25); background: rgba(255, 255, 255, 0.7); backdrop-filter: blur(8px); border-radius: 999px; padding: 7px 15px; font-size: 13px; cursor: pointer; color: rgb(51, 51, 51); box-shadow: rgba(0, 0, 0, 0.05) 0px 2px 10px;">📝 Add Note</button></div><div class="cf-ext-note-box" style="display: none; width: min(560px, 92%); margin: 14px auto 0px; padding: 14px; border-radius: 18px; border: 1px solid rgba(120, 120, 120, 0.18); background: rgba(255, 255, 255, 0.63); backdrop-filter: blur(10px); box-shadow: rgba(0, 0, 0, 0.05) 0px 8px 24px;"><textarea placeholder="Write your note..." class="cf-ext-note-textarea" style="width: 100%; min-height: 150px; resize: vertical; padding: 12px; box-sizing: border-box; border-radius: 14px; border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.75); font-size: 14px; outline: none;"></textarea><div style="display: flex; justify-content: flex-end; gap: 8px; margin-top: 10px;"><button class="cf-ext-note-btn cf-ext-note-btn-action" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 255, 255, 0.72); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(34, 34, 34); backdrop-filter: blur(8px);">Save</button><button class="cf-ext-note-btn cf-ext-note-btn-danger" style="border: 1px solid rgba(120, 120, 120, 0.2); background: rgba(255, 240, 240, 0.75); border-radius: 999px; padding: 7px 14px; cursor: pointer; font-size: 13px; color: rgb(176, 0, 32); backdrop-filter: blur(8px);">Delete</button></div></div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given a lowercase Latin character (letter), check if it appears in the string $$$\texttt{codeforces}$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains an integer $$$t$$$ ($$$1 \leq t \leq 26$$$) — the number of test cases.</p><p>The only line of each test case contains a character $$$c$$$ — a single lowercase Latin character (letter).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output "<span class="tex-font-style-tt">YES</span>" (without quotes) if $$$c$$$ satisfies the condition, and "<span class="tex-font-style-tt">NO</span>" (without quotes) otherwise.</p><p>You can output the answer in any case (for example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>" and "<span class="tex-font-style-tt">YES</span>" will be recognized as a positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006935433006947942" id="id007779883890963367" class="input-output-copier">Copy</div></div><pre id="id006935433006947942"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">a</div><div class="test-example-line test-example-line-even test-example-line-2">b</div><div class="test-example-line test-example-line-odd test-example-line-3">c</div><div class="test-example-line test-example-line-even test-example-line-4">d</div><div class="test-example-line test-example-line-odd test-example-line-5">e</div><div class="test-example-line test-example-line-even test-example-line-6">f</div><div class="test-example-line test-example-line-odd test-example-line-7">g</div><div class="test-example-line test-example-line-even test-example-line-8">h</div><div class="test-example-line test-example-line-odd test-example-line-9">i</div><div class="test-example-line test-example-line-even test-example-line-10">j</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000807449082162417" id="id005178368497018977" class="input-output-copier">Copy</div></div><pre id="id000807449082162417">NO
NO
YES
YES
YES
YES
NO
NO
NO
NO
</pre></div></div></div>