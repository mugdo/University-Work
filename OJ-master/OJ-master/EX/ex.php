<?php

!function(e){
    function r(r){
        for(var n,f,i=r[0],l=r[1],a=r[2],c=0,s=[];c<i.length;c++)
            f=i[c], o[f]&&s.push(o[f][0]),o[f]=0;
        for(n in l)
            Object.prototype.hasOwnProperty.call(l,n)&&(e[n]=l[n]);
        for(p&&p(r);s.length;)
            s.shift()();

        return u.push.apply(u,a||[]),t()
    }
    function t(){
        for(var e,r=0;r<u.length;r++){
            for(var t=u[r],n=!0,i=1;i<t.length;i++){
                var l=t[i];0!==o[l]&&(n=!1)
            }n&&(u.splice(r--,1),e=f(f.s=t[0]))
        }
        return e
    }
    var n={},o={0:0},u=[];
    function f(r){
        if(n[r])return n[r].exports;var t=n[r]={i:r,l:!1,exports:{}};
        return e[r].call(t.exports,t,t.exports,f),t.l=!0,t.exports
    }
    f.m=e,
    f.c=n,
    f.d=function(e,r,t){
        f.o(e,r)||Object.defineProperty(e,r,{enumerable:!0,get:t})
    },
    f.r=function(e){
        "undefined"!=typeof Symbol&&Symbol.toStringTag&&Object.defineProperty(e,Symbol.toStringTag,{value:"Module"}),Object.defineProperty(e,"__esModule",{value:!0})
    },
    f.t=function(e,r){
        if(1&r&&(e=f(e)),8&r)return e;
        if(4&r&&"object"==typeof e&&e&&e.__esModule)return e;
        var t=Object.create(null);
        if(f.r(t),Object.defineProperty(t,"default",{enumerable:!0,value:e}),2&r&&"string"!=typeof e)
            for(var n in e)
                f.d(t,n,function(r){
                    return e[r]
                }.bind(null,n));
                return t
    },
    f.n=function(e){
        var r=e&&e.__esModule?function(){
            return e.default
        }:function(){
            return e
        };
        return f.d(r,"a",r),r
    },
    f.o=function(e,r){
        return Object.prototype.hasOwnProperty.call(e,r)
    },
    f.p="";
    var i=window.webpackJsonp=window.webpackJsonp||[],l=i.push.bind(i);
    i.push=r,i=i.slice();
    for(var a=0;a<i.length;a++)
        r(i[a]);
        var p=l;t()
}
([]);

Invoke-WebRequest -Uri "https://toph.co/p/copycat/submit" -Method "POST" -Headers @{"method"="POST"; "authority"="toph.co"; "scheme"="https"; "path"="/p/copycat/submit"; "cache-control"="max-age=0"; "origin"="https://toph.co"; "upgrade-insecure-requests"="1"; "user-agent"="Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/80.0.3987.122 Safari/537.36"; "sec-fetch-dest"="document"; "accept"="text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9"; "sec-fetch-site"="same-origin"; "sec-fetch-mode"="navigate"; "sec-fetch-user"="?1"; "referer"="https://toph.co/p/copycat"; "accept-encoding"="gzip, deflate, br"; "accept-language"="en-US,en;q=0.9"; "cookie"="_ga=GA1.2.980334467.1583173345; _gid=GA1.2.630067549.1583272498; platform=MTU4MzM1MjcxNHwzUkc1N1hpeno5V0lodExEdFFSTTFGVUdMbjFxSkJNQ0VSMmM5NmpTaDBObERQTlFPZTdEUDh4X3dpb1pmemFsM01yYzZRbzBnZE54MVFGbnlCTXh1eXAwT2VBVXppY0NiRlQ4Mnc4Z0FSelJmZ0o2NkhlOHltQk5RTXFLeVdoWTB3PT18kc_tV_JuKmZZEBgle41c6l7ewX61akAlzEg3sboOSm4="} -ContentType "multipart/form-data; boundary=----WebKitFormBoundaryfs2pymgRgLZK1PNq"