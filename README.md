# 🔌 Roboldo-IoT-Firmware — Sistemas Embarcados & IoT (C/C++)

Repositório dedicado aos códigos embarcados em **C/C++ (ESP32 / Arduino / PlatformIO)**, comunicação IoT, controle de motores, sensores de toque e segurança física do **Roboldo** (**LAR / UERN**).

---

## 🎯 Escopo Técnico

- **Arquitetura Dual-ESP32**: Firmware dedicado aos microcontroladores da **Cabeça** (expressões, sensores capacitivos, áudio/display) e **Braços / Base Móvel** (motores, encoders, PID e cinemática).
- **Controle PID & Odometria**: Malha fechada de velocidade/posição e leitura de encoders em tempo real.
- **Sensores de Toque & IHR**: Mapeamento e debounce de sensores de toque capacitivos com envio de eventos ao Orbit.
- **Segurança Física (*E-Stop*) & BMS**: Monitoramento de bateria, corrente e parada de emergência por hardware/software.

---

## 👥 Equipes Responsáveis (`CODEOWNERS`)

- **Zona Principal**: `@ROBOLDO-UERN/zona-mecanica-hardware` ([📋 Project Zona 4](https://github.com/orgs/ROBOLDO-UERN/projects/4))
- **Coordenação & Revisão**: `@ROBOLDO-UERN/professores` & `@ROBOLDO-UERN/bolsistas`
- **Painel Geral da Organização**: [📋 Central Geral de Trabalhos (Project #6)](https://github.com/orgs/ROBOLDO-UERN/projects/6)

---

## 📂 Estrutura do Projeto (PlatformIO)

```text
Roboldo-IoT-Firmware/
├── platformio.ini     # Configuração de placas (ESP32) e bibliotecas
├── include/           # Headers (.h) — pinout, protocolo serial/IoT e constantes PID
├── src/               # Código-fonte C/C++ (.cpp)
└── docs/              # Pinout dos microcontroladores e protocolo de telemetria
```
