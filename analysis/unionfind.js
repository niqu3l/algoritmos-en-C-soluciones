const quickfind = () => {
	let buff = "1 2\n3 4\n2 9\n1 9";
	const numbers = buff.split(/[\s\n]+/).map(Number).filter(n => !isNaN(n));
	const len = Math.max(...numbers) + 1;
	let id = Array.from({length: len}, (e, i) => i);

	buff.split("\n").forEach(par => {
		let [p, q] = par.split(" ").map(Number);
		
		if (id[p] != id[q]) {
			for (let t = id[p], i = 0;
				 i < len;
				 i++)
				if (id[i] == t) id[i] = id[q];

			console.log(`${p}-${q}`);
		}
	});
}

quickfind();
