--PRAGMA foreign_keys = ON;



-- Volcado de datos para la tabla `conceptos`
INSERT INTO Conceptos (Fecha_repaso, Nivel, Pregunta, Respuesta) VALUES
('21/11/2023', '2', 'Constructor?\n que es?', 'el constructor es la parte de una clase la cual sirve para inicializar alguna clase con algún parámetro del mismo.');

-- Índices para la tabla `conceptos`
CREATE INDEX idx_conceptos_id ON conceptos (id);
