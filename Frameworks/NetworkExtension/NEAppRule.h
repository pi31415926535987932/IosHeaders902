/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:36:09 PM Greenwich Mean Time
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

@class NSString, NSArray;

@interface NEAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NSString* _matchSigningIdentifier;
	NSString* _matchDesignatedRequirement;
	NSString* _matchPath;
	NSArray* _matchDomains;
	NSArray* _matchAccountIdentifiers;
	NSArray* _additionalExecutables;

}

@property (readonly) NSString * matchSigningIdentifier;                  //@synthesize matchSigningIdentifier=_matchSigningIdentifier - In the implementation block
@property (readonly) NSString * matchDesignatedRequirement;              //@synthesize matchDesignatedRequirement=_matchDesignatedRequirement - In the implementation block
@property (copy) NSString * matchPath;                                   //@synthesize matchPath=_matchPath - In the implementation block
@property (copy) NSArray * matchDomains;                                 //@synthesize matchDomains=_matchDomains - In the implementation block
@property (copy) NSArray * matchAccountIdentifiers;                      //@synthesize matchAccountIdentifiers=_matchAccountIdentifiers - In the implementation block
@property (copy) NSArray * additionalExecutables;                        //@synthesize additionalExecutables=_additionalExecutables - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned)arg2 ;
-(id)copyLegacyDictionary;
-(NSString *)matchSigningIdentifier;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSArray *)matchDomains;
-(void)setMatchDomains:(NSArray *)arg1 ;
-(char)overlapsWithRule:(id)arg1 ;
-(NSArray *)additionalExecutables;
-(id)initWithSigningIdentifier:(id)arg1 ;
-(NSArray *)matchAccountIdentifiers;
-(void)setMatchAccountIdentifiers:(NSArray *)arg1 ;
-(char)signingIdentifierAllowed:(id)arg1 domainsRequired:(out char*)arg2 ;
-(NSString *)matchDesignatedRequirement;
-(NSString *)matchPath;
-(void)setMatchPath:(NSString *)arg1 ;
-(void)setAdditionalExecutables:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

