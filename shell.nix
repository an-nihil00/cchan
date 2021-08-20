{ pkgs ? import <nixpkgs> {} }:

with pkgs;

let

in

mkShell {
  buildInputs = [ kore ];
}