/* Copyright (C) 2000 Free Software Foundation

   This file is part of libgcj.

This software is copyrighted work licensed under the terms of the
Libgcj License.  Please consult the file "LIBGCJ_LICENSE" for
details.  */

package javax.naming;

public interface Context
{
  // Property with name of the inital context factory to use
  public static final String INITIAL_CONTEXT_FACTORY 
    = "java.naming.factory.initial";

  // Property with colon-separated list of object factories to use.
  public static final String OBJECT_FACTORIES
    = "java.naming.factory.object";

  // Property with colon-separated list of state factories to use.
  public static final String STATE_FACTORIES
    = "java.naming.factory.state";

  // Property with colon-separated list of package prefixes to use.
  public static final String URL_PKG_PREFIXES
    = "java.naming.factory.url.pkgs";

  // Property with URL specifying configuration for the service
  // provider to use.
  public static final String PROVIDER_URL 
    = "java.naming.provider.url";
  
  // Property with the DNS host and domain names to use.
  public static final String DNS_URL 
    = "java.naming.dns.url";
  
  // Property with the authoritativeness of the service requested.
  public static final String AUTHORITATIVE 
    = "java.naming.authoritative";
  
  // Property with the batch size to use when returning data via the
  // service's protocol.
  public static final String BATCHSIZE
    = "java.naming.batchsize";
  
  // Property defining how referrals encountered by the service
  // provider are to be processed.
  public static final String REFERRAL
    = "java.naming.referral";

  // Property specifying the security protocol to use.
  public static final String SECURITY_PROTOCOL
    = "java.naming.security.protocol";

  // Property specifying the security level to use.
  public static final String SECURITY_AUTHENTICATION
    = "java.naming.security.authentication";

  // Property for the identity of the principal for authenticating
  // the caller to the service.
  public static final String SECURITY_PRINCIPAL
    = "java.naming.security.principal";

  // Property specifying the credentials of the principal for
  // authenticating the caller to the service.
  public static final String SECURITY_CREDENTIAL
    = "java.naming.security.credentials";

  // Property for specifying the preferred language to use with the
  // service.
  public static final String LANGUAGE
    = "java.naming.language";

  // Property for the initial context constructor to use when searching
  // for other properties.
  public static final String APPLET
    = "java.naming.applet";

  public void bind (Name name, Object obj) throws NamingException;
  public void bind (String name, Object obj) throws NamingException;
}

