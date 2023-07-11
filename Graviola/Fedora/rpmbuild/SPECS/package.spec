# Exemplo de arquivo .spec para criar um pacote RPM

# Informações básicas do pacote
Name: meu-pacote
Version: 1.0
Release: 1%{?dist}
Summary: Descrição do meu pacote
License: GPL-3.0-or-later
URL: https://exemplo.com/meu-pacote
Source0: %{name}-%{version}.tar.gz

# Dependências do pacote
BuildRequires: gcc
Requires: libfoo >= 1.0, libbar

# Descrição detalhada do pacote
%description
Meu Pacote é um pacote incrível que faz coisas incríveis.

# Configuração e compilação do pacote
%prep
%autosetup -n %{name}-%{version}
# Comandos de pré-processamento aqui, se necessário

%build
%configure
make %{?_smp_mflags}

# Instalação do pacote
%install
make install DESTDIR=%{buildroot}

# Arquivos e diretórios do pacote
%files
%license LICENSE
%doc README.md
%{_bindir}/meu-executavel
%{_datadir}/meu-pacote/

# Scripts de pós-instalação e pós-remoção
%post
# Comandos de pós-instalação aqui, se necessário

%postun
# Comandos de pós-remoção aqui, se necessário

# Informações adicionais
%changelog
* Thu Jan 01 2023 Seu Nome <seu@email.com> - 1.0-1
- Primeira versão do pacote

