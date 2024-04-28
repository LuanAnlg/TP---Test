#pragma once

#include "Funciones.h"

#define R "R) Saltar (descartar un aliado)."

class Pregunta {

private:

	char r;
	std::vector<std::string> ip;
	std::vector<std::string> ir;

public:

	char getRespuesta() const { return r; }

	Pregunta(short n) {

		ip.resize(18);
		ir.resize(10);

		for (int i = 1; i < 17; i++) {
			ip[i] = " ";
		}
		ip[0] = BLANCO;
		ip[17] = REINICIO;

		for (int i = 1; i < 9; i++) {
			ip[i] = " ";
		}
		ir[0] = VERDE;
		ir[8] = "Presione cualquier tecla para continuar";
		ir[9] = REINICIO;

		switch (n) {

		case 0:

			r = 'Q';

			ip[1] = "Cual es el significado actual del termino \"queer\"?";
			ip[2] = ROJO;
			ip[3] = "Q) Un termino descriptivo utilizado por algunas personas para expresar";
			ip[4] = "positivamente su sexualidad y/o expresion de genero.";
			ip[5] = AMARILLO;
			ip[6] = "W) Un termino insultante para referirse a quienes no cumplen con las";
			ip[7] = "expectativas de la sociedad en cuanto a sexualidad y/o expresion de";
			ip[8] = "genero.";
			ip[9] = AZUL;
			ip[10] = "E) Una expresion despectiva que la gente nunca deberia utilizar.";
			ip[11] = GRIS;
			ip[12] = R;

			ir[1] = "El termino \"queer\" ha sido reclamado y utilizado por algunas personas";
			ir[2] = "como una forma de autoidentificacion positiva que abarca una amplia";
			ir[3] = "gama de identidades sexuales y de género fuera de las normas";
			ir[4] = "heteronormativas.";

			break;

		case 1:

			r = 'Q';

			ip[1] = "Cual es la diferencia entre sexo y genero?";
			ip[2] = ROJO;
			ip[3] = "Q) El sexo se refiere a caracteristicas fisicas como genitales,";
			ip[4] = "hormonas y cromosomas, mientras que el genero se refiere al sentido";
			ip[5] = "interno de la identidad de una persona.";
			ip[6] = AMARILLO;
			ip[7] = "W) El sexo se relaciona con el sentido interno de la identidad de una";
			ip[8] = "persona, mientras que el genero se refiere a caracteristicas fisicas";
			ip[9] = "como genitales y hormonas.";
			ip[10] = AZUL;
			ip[11] = "E) El sexo y el genero son terminos intercambiables que se refieren a";
			ip[12] = "lo mismo.";
			ip[13] = GRIS;
			ip[14] = R;

			ir[1] = "El termino \"queer\" ha sido reclamado y utilizado por algunas personas";
			ir[2] = "como una forma de autoidentificacion positiva que abarca una amplia";
			ir[3] = "gama de identidades sexuales y de genero fuera de las normas";
			ir[4] = "heteronormativas.";

			break;

		case 2:

			r = 'W';

			ip[1] = "Cual es el principal significado del termino \"cisgenero\"?";
			ip[2] = ROJO;
			ip[3] = "Q) Para alguien que se siente comodo con las expectativas de la";
			ip[4] = "sociedad para las personas de su genero.";
			ip[5] = AMARILLO;
			ip[6] = "W) Para alguien cuya identidad de genero actual coincide con el sexo";
			ip[7] = "que se le asigno al nacer.";
			ip[8] = AZUL;
			ip[9] = "E) Como un insulto o termino despectivo para las personas que no son";
			ip[10] = "transexuales o que no entienden la terminologia o los pronombres";
			ip[11] = "correctos.";
			ip[12] = GRIS;
			ip[13] = R;

			ir[1] = "Una persona cisgenero es aquella cuya identidad de genero coincide con";
			ir[2] = "el sexo que se le asigno al nacer. Es importante comprender y respetar";
			ir[3] = "la diversidad de identidades de genero dentro de la comunidad LGBTQ+.";

			break;

		case 3:

			r = 'Q';

			ip[1] = "Cual de las siguientes opciones define mejor la \"cisnormatividad\"?";
			ip[2] = ROJO;
			ip[3] = "Q) Las creencias, practicas y sistemas de una sociedad que consideran";
			ip[4] = "que ser cisgenero es mas normal y preferible que ser transgenero.";
			ip[5] = AMARILLO;
			ip[6] = "W) El hecho de que sea mas comun, y por tanto mas normal, que una";
			ip[7] = "persona sea cisgenero que transgenero.";
			ip[8] = AZUL;
			ip[9] = "E) Creencias personales de que ser transexual es pecaminoso o un";
			ip[10] = "signo de enfermedad mental.";
			ip[11] = GRIS;
			ip[12] = R;

			ir[1] = "La cisnormatividad se refiere a la suposicion de que ser cisgenero es";
			ir[2] = "la norma y preferible, lo que puede llevar a la discriminacion y";
			ir[3] = "exclusion de las personas transgenero en la sociedad.";

			break;

		case 4:

			r = 'W';

			ip[1] = "Cual es la relacion entre la misoginia y la transfobia?";
			ip[2] = ROJO;
			ip[3] = "Q) La transfobia y la misoginia son similares porque ambas tratan del";
			ip[4] = "odio y los prejuicios contra las personas por su genero, pero no estan";
			ip[5] = "relacionadas entre si.";
			ip[6] = AMARILLO;
			ip[7] = "W) La transfobia y la misoginia son dos formas de prejuicio";
			ip[8] = "diferentes, pero estan conectadas porque refuerzan la jerarquia de";
			ip[9] = "genero y se basan en la creencia de que la masculinidad es superior a";
			ip[10] = "la feminidad, asi como a las identidades transgenero.";
			ip[11] = AZUL;
			ip[12] = "E) La transfobia y la misoginia significan casi lo mismo: ambas son";
			ip[13] = "ejemplos de odio y prejuicios contra las personas a causa de su genero.";
			ip[14] = GRIS;
			ip[15] = R;

			ir[1] = "Tanto la transfobia como la misoginia son manifestaciones de prejuicio";
			ir[2] = "basadas en el genero. Estan interconectadas porque refuerzan la idea";
			ir[3] = "de que la masculinidad es superior a la feminidad, contribuyendo asi a";
			ir[4] = "la opresion de las mujeres y las personas transgenero. Ambas formas de";
			ir[5] = "prejuicio se basan en la creencia erronea de que ciertos generos son";
			ir[6] = "inherentemente superiores o inferiores a otros.";

			break;

		case 5:

			r = 'E';

			ip[1] = "Cual de las siguientes actividades esta principalmente relacionada con";
			ip[2] = "la \"transicion social\" para una mujer transgenero?";
			ip[3] = ROJO;
			ip[4] = "Q) Solicitar un nuevo pasaporte o visado.";
			ip[5] = AMARILLO;
			ip[6] = "W) Afeitarse la cara.";
			ip[7] = AZUL;
			ip[8] = "E) Llevar pintalabios u otros cosmeticos.";
			ip[9] = GRIS;
			ip[10] = R;

			ir[1] = "La transicion social implica cambios externos para que la expresion de";
			ir[2] = "genero de una persona coincida con su identidad de genero. Esto puede";
			ir[3] = "incluir cambios en la vestimenta, el peinado, el maquillaje y otros";
			ir[4] = "aspectos de presentacion.";

			break;

		case 6:

			r = 'W';

			ip[1] = "Cual de las siguientes actividades esta principalmente relacionada";
			ip[2] = "con la \"transicion medica\"?";
			ip[3] = ROJO;
			ip[4] = "Q) Afeitarse la cara.";
			ip[5] = AMARILLO;
			ip[6] = "W) Tomar testosterona o estrogeno.";
			ip[7] = AZUL;
			ip[8] = "E) Salir del armario ante familiares o amigos.";
			ip[9] = GRIS;
			ip[10] = R;

			ir[1] = "La transicion medica implica el uso de hormonas y otras intervenciones";
			ir[2] = "medicas para modificar las caracteristicas fisicas de una persona y";
			ir[3] = "que se alineen con su identidad de genero.";

			break;

		case 7:

			r = 'Q';

			ip[1] = "Que aspecto esta principalmente relacionado con la \"transicion legal\"?";
			ip[2] = ROJO;
			ip[3] = "Q)Cambiar de nombre y utilizar pronombres diferentes.";
			ip[4] = AMARILLO;
			ip[5] = "W)Llevar pintalabios u otros cosmeticos.";
			ip[6] = AZUL;
			ip[7] = "E)Afeitarse la cara.";
			ip[8] = GRIS;
			ip[9] = R;

			ir[1] = "La transicion legal implica cambiar la documentacion";
			ir[2] = "legal, como el nombre y el genero en los documentos de identidad, para";
			ir[3] = "reflejar la identidad de genero de una persona.";

			break;

		case 8:

			r = 'E';

			ip[1] = "Cual de las siguientes opciones describe mejor la relacion entre la ";
			ip[2] = "\"cisnormatividad\" y la comunidad LGBTQ+?";
			ip[3] = ROJO;
			ip[4] = "Q)La cisnormatividad es un concepto irrelevante para la comunidad LGBTQ+.";
			ip[5] = AMARILLO;
			ip[6] = "W)La cisnormatividad es un aspecto fundamental que define la aceptacion";
			ip[7] = "dentro de la comunidad LGBTQ+.";
			ip[8] = AZUL;
			ip[9] = "E)La cisnormatividad representa un desafio para aquellos dentro de la";
			ip[10] = "comunidad LGBTQ+ que no se identifican como cisgenero.";
			ip[11] = GRIS;
			ip[12] = R;

			ir[1] = "La cisnormatividad puede ser una barrera para la aceptacion";
			ir[2] = "y la inclusion de personas LGBTQ+ que no se identifican como cisgenero,";
			ir[3] = "ya que promueve la idea de que las identidades transgenero son menos";
			ir[4] = "validas o legitimas.";

			break;

		case 9:

			r = 'W';

			ip[1] = "Cual es el papel de la \"transicion social\" en el proceso de";
			ip[2] = "afirmacion de genero?";
			ip[3] = ROJO;
			ip[4] = "Q)Es un paso opcional y no necesario para todas las personas";
			ip[5] = "transgenero.";
			ip[6] = AMARILLO;
			ip[7] = "W)Es un proceso vital para el bienestar y la autenticidad de las";
			ip[8] = "personas transgenero.";
			ip[9] = AZUL;
			ip[10] = "E)Es un concepto obsoleto que ya no se considera relevante en la";
			ip[11] = "comunidad transgenero.";
			ip[12] = GRIS;
			ip[13] = R;

			ir[1] = "La transicion social permite a las personas transgenero";
			ir[2] = "vivir de manera autentica y alinearse con su identidad de genero, lo";
			ir[3] = "que contribuye significativamente a su bienestar psicologico y emocional.";

			break;

		case 10:

			r = 'W';

			ip[1] = "Cual es la importancia de la \"transicion legal\" en la vida de las";
			ip[2] = "personas transgenero?";
			ip[3] = ROJO;
			ip[4] = "Q)Es un proceso puramente burocratico sin impacto significativo en";
			ip[5] = "la vida cotidiana.";
			ip[6] = AMARILLO;
			ip[7] = "W)Proporciona reconocimiento legal y proteccion de derechos para";
			ip[8] = "las personas transgenero.";
			ip[9] = AZUL;
			ip[10] = "E)Es un paso opcional que no afecta la identidad de genero de";
			ip[11] = "una persona.";
			ip[12] = GRIS;
			ip[13] = R;

			ir[1] = "La transicion legal garantiza el reconocimiento legal";
			ir[2] = "de la identidad de genero de una persona y protege sus derechos";
			ir[3] = "civiles, incluido el acceso a servicios medicos, educativos y";
			ir[4] = "laborales sin discriminación por su identidad de genero.";

			break;

		case 11:

			r = 'Q';

			ip[1] = "Como puede contribuir la \"cisnormatividad\" a la discriminacion";
			ip[2] = "y exclusión de las personas transgenero en la sociedad?";
			ip[3] = ROJO;
			ip[4] = "Q)Reforzando estereotipos de genero y limitando la aceptación de";
			ip[5] = "identidades diversas.";
			ip[6] = AMARILLO;
			ip[7] = "W)Promoviendo la igualdad de genero y la inclusión de todas las";
			ip[8] = "identidades.";
			ip[9] = AZUL;
			ip[10] = "E)Fomentando la diversidad y la comprensión de la variedad de";
			ip[11] = "experiencias de genero.";
			ip[12] = GRIS;
			ip[13] = R;

			ir[1] = "La cisnormatividad promueve la idea de que solo";
			ir[2] = "existen dos generos validos y que la identidad de genero debe";
			ir[3] = "coincidir con el sexo asignado al nacer, lo que puede llevar a la";
			ir[4] = "discriminacion y la exclusión de las personas transgénero que no se";
			ir[5] = "ajustan a esas normas.";

			break;

		case 12:

			r = 'W';

			ip[1] = "Cual es el proposito principal de salir del armario?";
			ip[2] = ROJO;
			ip[3] = "Q)Garantizar la aceptacion y apoyo de la sociedad.";
			ip[4] = AMARILLO;
			ip[5] = "W)Validar la identidad de genero de la persona y vivir autenticamente.";
			ip[6] = AZUL;
			ip[7] = "E)Cumplir con las expectativas de genero impuestas por la sociedad.";
			ip[8] = GRIS;
			ip[9] = R;

			ir[1] = "Salir del armario es un acto de afirmacion de la identidad";
			ir[2] = "de genero o la orientacion sexual de una persona y les permite vivir";
			ir[3] = "de manera auténtica y honesta consigo mismos y con los demas.";

			break;

		case 13:

			r = 'W';

			ip[1] = "Por que es importante respetar y utilizar los pronombres preferidos de";
			ip[2] = "una persona segun lo enfatizado en el modulo?";
			ip[3] = ROJO;
			ip[4] = "Q)Porque no importa que pronombres se utilicen, todos son igualmente";
			ip[5] = "validos.";
			ip[6] = AMARILLO;
			ip[7] = "W)Porque el uso correcto de los pronombres demuestra respeto y";
			ip[8] = "reconocimiento de la identidad de genero de la persona.";
			ip[9] = AZUL;
			ip[10] = "E)Porque los pronombres no son relevantes para la identidad de genero";
			ip[11] = "de una persona.";
			ip[12] = GRIS;
			ip[13] = R;

			ir[1] = "Respetar y utilizar los pronombres preferidos de una persona";
			ir[2] = "es fundamental para demostrarles respeto y reconocimiento de su identidad";
			ir[3] = "de genero, asi como para crear un entorno seguro y acogedor para ellas.";

			break;

		case 14:

			r = 'W';

			ip[1] = "Que significa la sigla \"LGBT\"?";
			ip[2] = ROJO;
			ip[3] = "Q)Lesbianas, Gays, Bisexuales y Transexuales.";
			ip[4] = AMARILLO;
			ip[5] = "W)Lesbianas, Gays, Bisexuales y Transgenero.";
			ip[6] = AZUL;
			ip[7] = "E)Lesbianas, Gays, Bisexuales y Travestis.";
			ip[8] = GRIS;
			ip[9] = R;

			ir[1] = "La sigla \"LGBT\" representa a lesbianas, gays, bisexuales y";
			ir[2] = "personas transgenero, aunque algunas variantes de la sigla pueden";
			ir[3] = "incluir a otras identidades sexuales y de genero.";

			break;

		case 15:

			r = 'Q';

			ip[1] = "Cual es la definicion mas precisa de la orientacion sexual?";
			ip[2] = ROJO;
			ip[3] = "Q)La atraccion romantica, sexual o emocional hacia personas del mismo";
			ip[4] = "genero, genero diferente o ambos.";
			ip[5] = AMARILLO;
			ip[6] = "W)La identidad interna de genero de una persona.";
			ip[7] = AZUL;
			ip[8] = "E)La forma en que una persona se expresa a traves de su genero.";
			ip[9] = GRIS;
			ip[10] = R;

			ir[1] = "La orientacion sexual se refiere a la atraccion romantica,";
			ir[2] = "sexual o emocional que una persona siente hacia otras personas, ya sea";
			ir[3] = "del mismo genero, de genero diferente o de ambos generos.";

			break;

		case 16:

			r = 'Q';

			ip[1] = "Cual es una caracteristica comun de las personas que se identifican";
			ip[2] = "como lesbianas?";
			ip[3] = ROJO;
			ip[4] = "Q)Atraccion romantica o sexual hacia personas del mismo genero.";
			ip[5] = AMARILLO;
			ip[6] = "W)Atraccion romantica o sexual exclusivamente hacia personas del";
			ip[7] = "genero opuesto.";
			ip[8] = AZUL;
			ip[9] = "E)Atraccion romantica o sexual hacia personas de cualquier genero.";
			ip[10] = GRIS;
			ip[11] = R;

			ir[1] = "Las personas que se identifican como lesbianas";
			ir[2] = "experimentan atraccion romantica o sexual hacia personas del";
			ir[3] = "mismo genero.";

			break;

		case 17:

			r = 'W';

			ip[1] = "Que significa la orientacion sexual \"pansexual\"?";
			ip[2] = ROJO;
			ip[3] = "Q)Estar atrapado en el cuerpo de alguien del sexo opuesto al que uno";
			ip[4] = "se identifica.";
			ip[5] = AMARILLO;
			ip[6] = "W)Sentir atraccion romantica o sexual hacia personas de todos los";
			ip[7] = "generos.";
			ip[8] = AZUL;
			ip[9] = "E)Sentir atraccion romantica o sexual solo hacia personas del mismo";
			ip[10] = "genero.";
			ip[11] = GRIS;
			ip[12] = R;

			ir[1] = "La orientacion sexual pansexual implica sentir";
			ir[2] = "atraccion romantica o sexual hacia personas de todos los generos,";
			ir[3] = "sin importar su identidad de genero.";

			break;

		case 18:

			r = 'Q';

			ip[1] = "Cual es una caracteristica comun de las personas que se";
			ip[2] = "identifican como gays?";
			ip[3] = ROJO;
			ip[4] = "Q)Atraccion romantica o sexual exclusivamente hacia personas del";
			ip[5] = "mismo genero.";
			ip[6] = AMARILLO;
			ip[7] = "W)Atraccion romantica o sexual hacia personas de cualquier genero.";
			ip[8] = AZUL;
			ip[9] = "E)Atraccion romantica o sexual hacia personas del genero opuesto.";
			ip[10] = GRIS;
			ip[11] = R;

			ir[1] = "Las personas que se identifican como gays experimentan";
			ir[2] = "atraccion romantica o sexual exclusivamente hacia personas del mismo";
			ir[3] = "genero.";

			break;

		case 19:

			r = 'Q';

			ip[1] = "Que significa la orientacion sexual \"bisexual\"?";
			ip[2] = ROJO;
			ip[3] = "Q)Sentir atraccion romantica o sexual hacia personas de todos los";
			ip[4] = "generos.";
			ip[5] = AMARILLO;
			ip[6] = "W)Sentir atraccion romantica o sexual exclusivamente hacia personas";
			ip[7] = "del mismo generos.";
			ip[8] = AZUL;
			ip[9] = "E)Sentir atraccion romantica o sexual hacia personas del generos";
			ip[10] = "opuesto.";
			ip[11] = GRIS;
			ip[12] = R;

			ir[1] = "La orientacion sexual bisexual implica sentir atraccion";
			ir[2] = "romantica o sexual hacia personas de todos los generos, aunque no";
			ir[3] = "necesariamente de la misma manera o al mismo tiempo.";

			break;

		case 20:

			r = 'Q';

			ip[1] = "Que significa la orientacion sexual \"asexual\"?";
			ip[2] = ROJO;
			ip[3] = "Q)No sentir atraccion romantica o sexual hacia ninguna persona.";
			ip[4] = AMARILLO;
			ip[5] = "W)Sentir atraccion romantica o sexual solo hacia personas del mismo";
			ip[6] = "genero.";
			ip[7] = AZUL;
			ip[8] = "E)Sentir atraccion romantica o sexual hacia personas de cualquier";
			ip[9] = "genero.";
			ip[10] = GRIS;
			ip[11] = R;

			ir[1] = "La orientacion sexual asexual se caracteriza por la falta";
			ir[2] = "de atraccion romantica o sexual hacia otras personas.";

			break;

		case 21:

			r = 'W';

			ip[1] = "Cual es el significado del termino \"heteronormatividad\"?";
			ip[2] = ROJO;
			ip[3] = "Q)La creencia de que las relaciones entre personas del mismo genero";
			ip[4] = "son la norma.";
			ip[5] = AMARILLO;
			ip[6] = "W)La expectativa de que la heterosexualidad es la norma social y";
			ip[7] = "preferida.";
			ip[8] = AZUL;
			ip[9] = "E)La idea de que las relaciones poliamorosas son mas comunes que las";
			ip[10] = "monogamas.";
			ip[11] = GRIS;
			ip[12] = R;

			ir[1] = "La heteronormatividad es la expectativa cultural y social de que la ";
			ir[2] = "heterosexualidad es la norma y preferida en la sociedad. Esto puede";
			ir[3] = "manifestarse en la suposicion de que todas las personas son";
			ir[4] = "heterosexuales hasta que se demuestre lo contrario, asi como en la";
			ir[5] = "valoracion y privilegio otorgados a las relaciones heterosexuales ";
			ir[6] = "sobre otras formas de orientacion sexual o identidad de genero.";

			break;

		case 22:

			r = 'W';

			ip[1] = "Que significa la orientacion sexual \"heterosexual\"?";
			ip[2] = ROJO;
			ip[3] = "Q)Sentir atraccion romantica o sexual hacia personas del mismo genero.";
			ip[4] = AMARILLO;
			ip[5] = "W)Sentir atraccion romantica o sexual exclusivamente hacia personas del";
			ip[6] = "genero opuesto.";
			ip[7] = AZUL;
			ip[8] = "E)No sentir atraccion romantica o sexual hacia ninguna persona.";
			ip[9] = GRIS;
			ip[10] = R;

			ir[1] = "La orientacion sexual heterosexual implica sentir atraccion romantica";
			ir[2] = "o sexual exclusivamente hacia personas del genero opuesto.";

			break;

		case 23:

			r = 'E';

			ip[1] = "Que significa la orientacion sexual \"homosexual\"?";
			ip[2] = ROJO;
			ip[3] = "Q)Sentir atraccion romantica o sexual exclusivamente hacia personas del";
			ip[4] = "genero opuesto.";
			ip[5] = AMARILLO;
			ip[6] = "W)Sentir atraccion romantica o sexual hacia personas de cualquier";
			ip[7] = "genero.";
			ip[8] = AZUL;
			ip[9] = "E)Sentir atraccion romantica o sexual hacia personas del mismo genero.";
			ip[10] = GRIS;
			ip[11] = R;

			ir[1] = "La orientacion sexual homosexual implica sentir atraccion";
			ir[2] = "romantica o sexual hacia personas del mismo genero.";

			break;

		case 24:

			r = 'Q';

			ip[1] = "Cual es el termino correcto para referirse a una persona cuya";
			ip[2] = "identidad de genero no se ajusta a las expectativas tradicionales de";
			ip[3] = "masculinidad o feminidad?";
			ip[4] = ROJO;
			ip[5] = "Q)Genero fluido.";
			ip[6] = AMARILLO;
			ip[7] = "W)No binario.";
			ip[8] = AZUL;
			ip[9] = "E)Transgenero.";
			ip[10] = GRIS;
			ip[11] = R;

			ir[1] = "Una persona cuya identidad de genero no se ajusta a las expectativas";
			ir[2] = "tradicionales de masculinidad o feminidad puede identificarse como ";
			ir[3] = "genero fluido, lo que significa que su identidad de genero puede";
			ir[4] = "cambiar con el tiempo o ser una combinacion de generos.";

			break;

		case 25:

			r = 'E';

			ip[1] = "Que es la intersexualidad?";
			ip[2] = ROJO;
			ip[3] = "Q)Una condicion medica que afecta la identidad de genero de una";
			ip[4] = "persona.";
			ip[5] = AMARILLO;
			ip[6] = "W)Una identidad de genero en la que una persona se identifica como";
			ip[7] = "ambos generos simultaneamente.";
			ip[8] = AZUL;
			ip[9] = "E)Una condicion biologica en la que una persona nace con";
			ip[10] = "caracteristicas sexuales que no se ajustan tipicamente a las";
			ip[11] = "definiciones binarias de sexo femenino o masculino.";
			ip[12] = GRIS;
			ip[13] = R;

			ir[1] = "La intersexualidad es una condicion biologica en la que una persona";
			ir[2] = "nace con caracteristicas sexuales que no se ajustan tipicamente a las";
			ir[3] = "definiciones binarias de sexo femenino o masculino. Esto puede incluir";
			ir[4] = "variaciones en los genitales, las hormonas o los cromosomas sexuales.";

			break;

		case 26:

			r = 'W';

			ip[1] = "Cual de las siguientes opciones describe mejor el termino ";
			ip[2] = "\"aceptacion\" en el contexto de la comunidad LGBTQ+?";
			ip[3] = ROJO;
			ip[4] = "Q)Tolerar la presencia de personas LGBTQ+ sin prejuicios.";
			ip[5] = AMARILLO;
			ip[6] = "W)Reconocer y respetar las identidades y experiencias de las personas";
			ip[7] = "LGBTQ+.";
			ip[8] = AZUL;
			ip[9] = "E)Promover activamente los derechos y la igualdad para las personas";
			ip[10] = "LGBTQ+.";
			ip[11] = GRIS;
			ip[12] = R;

			ir[1] = "La aceptacion en el contexto de la comunidad LGBTQ+ implica reconocer y";
			ir[2] = "respetar las identidades y experiencias de las personas LGBTQ+,";
			ir[3] = "independientemente de su orientación sexual o identidad de genero.";

			break;

		case 27:

			r = 'E';

			ip[1] = "Que es la transfobia internalizada?";
			ip[2] = ROJO;
			ip[3] = "E)El rechazo hacia personas transgenero por parte de individuos";
			ip[4] = "cisgenero.";
			ip[5] = AMARILLO;
			ip[6] = "W)La discriminacion experimentada por personas transgenero dentro de la";
			ip[7] = "comunidad LGBTQ+.";
			ip[8] = AZUL;
			ip[9] = "Q)La internalizacion de prejuicios y estigmas contra las identidades";
			ip[10] = "transgenero por parte de personas transgenero mismas.";
			ip[11] = GRIS;
			ip[12] = R;

			ir[1] = "La transfobia internalizada se refiere a la internalizacion por parte";
			ir[2] = "de personas transgenero de prejuicios y estigmas contra las identidades";
			ir[3] = "transgenero. Esto puede manifestarse como sentimientos de verguenza, ";
			ir[4] = "autodesprecio o negacion de la propia identidad de genero debido a la";
			ir[5] = "exposicion y asimilacion de actitudes transfobicas en la sociedad.";

			break;

		case 28:

			r = 'A';

			ip[1] = "Cual es el termino utilizado para describir el proceso de revelar o";
			ip[2] = "compartir la identidad de genero o la orientacion sexual de una persona";
			ip[3] = "con otras personas?";
			ip[4] = ROJO;
			ip[5] = "Q)Salir del closet.";
			ip[6] = AMARILLO;
			ip[7] = "W)Revelacion de identidad.";
			ip[8] = AZUL;
			ip[9] = "E)Autenticacion personal.";
			ip[10] = GRIS;
			ip[11] = R;

			ir[1] = "Salir del closet es el termino utilizado para describir el proceso";
			ir[2] = "mediante el cual una persona revela o comparte su identidad de genero o";
			ir[3] = "su orientacion sexual con otras personas, especialmente cuando esta";
			ir[4] = "identidad o orientacion ha sido mantenida en secreto o no ha sido";
			ir[5] = "conocida previamente por otras personas.";

			break;

		case 29:

			r = 'Q';

			ip[1] = "Que es la bifobia?";
			ip[2] = ROJO;
			ip[3] = "Q)El rechazo hacia personas que se identifican como bisexuales.";
			ip[4] = AMARILLO;
			ip[5] = "W)La discriminacion experimentada por personas no binarias dentro de";
			ip[6] = "la comunidad LGBTQ+.";
			ip[7] = AZUL;
			ip[8] = "E)La aversion hacia la existencia de mas de dos generos en la sociedad.";
			ip[9] = GRIS;
			ip[10] = R;

			ir[1] = "La bifobia se refiere al rechazo, discriminacion o estigmatizacion";
			ir[2] = "hacia personas que se identifican como bisexuales, basado en la";
			ir[3] = "creencia erronea de que la bisexualidad no es una orientacion sexual";
			ir[4] = "valida o legitima.";

			break;

		default: break;
		}
	}
	~Pregunta() {}

	void imprimirPregunta() const {

		for (int i = 0; i < 18; i++) {
			System::Console::SetCursorPosition(25, 5 + i);
			std::cout << ip[i];
		}
	}

	void imprimirRespuesta() const {

		for (int i = 0; i < 10; i++) {
			System::Console::SetCursorPosition(25, 11 + i);
			std::cout << ir[i];
		}
	}
};