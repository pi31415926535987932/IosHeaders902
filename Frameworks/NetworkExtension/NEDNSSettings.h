/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:36:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface NEDNSSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	char _matchDomainsNoSearch;
	NSArray* _servers;
	NSArray* _searchDomains;
	NSString* _domainName;
	NSArray* _matchDomains;

}

@property (readonly) NSArray * servers;                    //@synthesize servers=_servers - In the implementation block
@property (copy) NSArray * searchDomains;                  //@synthesize searchDomains=_searchDomains - In the implementation block
@property (copy) NSString * domainName;                    //@synthesize domainName=_domainName - In the implementation block
@property (copy) NSArray * matchDomains;                   //@synthesize matchDomains=_matchDomains - In the implementation block
@property (assign) char matchDomainsNoSearch;              //@synthesize matchDomainsNoSearch=_matchDomainsNoSearch - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSArray *)searchDomains;
-(NSArray *)matchDomains;
-(char)matchDomainsNoSearch;
-(id)initWithServers:(id)arg1 ;
-(void)setSearchDomains:(NSArray *)arg1 ;
-(void)setMatchDomains:(NSArray *)arg1 ;
-(void)setMatchDomainsNoSearch:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)servers;
-(NSString *)domainName;
-(void)setDomainName:(NSString *)arg1 ;
@end

