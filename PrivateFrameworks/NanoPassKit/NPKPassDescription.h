/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKImage, NSString, NSNumber, NSData, NSDate, PKNFCPayload, PKColor, PKPaymentApplication;

@interface NPKPassDescription : NSObject <NSSecureCoding, NSCopying> {

	char _hasStoredValue;
	char _privateLabel;
	char _cobranded;
	char _deletePending;
	char _hasUserSelectablePaymentApplications;
	PKImage* _logoImage;
	PKImage* _backgroundImage;
	NSString* _uniqueID;
	NSNumber* _groupID;
	NSString* _passTypeIdentifier;
	NSData* _manifestHash;
	int _style;
	NSDate* _relevantDate;
	NSDate* _ingestionDate;
	PKNFCPayload* _nfcPayload;
	NSData* _completeHash;
	unsigned _settings;
	NSString* _logoText;
	PKColor* _backgroundColor;
	PKColor* _foregroundColor;
	PKColor* _labelColor;
	PKPaymentApplication* _devicePrimaryPaymentApplication;
	PKPaymentApplication* _preferredPaymentApplication;
	int _effectivePaymentApplicationState;
	NSData* _logoImageEncoded;
	NSData* _backgroundImageEncoded;

}

@property (nonatomic,retain) NSString * uniqueID;                                                 //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSNumber * groupID;                                                  //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSString * passTypeIdentifier;                                       //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,retain) NSData * manifestHash;                                               //@synthesize manifestHash=_manifestHash - In the implementation block
@property (assign,nonatomic) int style;                                                           //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSDate * relevantDate;                                               //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,retain) NSDate * ingestionDate;                                              //@synthesize ingestionDate=_ingestionDate - In the implementation block
@property (nonatomic,retain) PKNFCPayload * nfcPayload;                                           //@synthesize nfcPayload=_nfcPayload - In the implementation block
@property (assign,nonatomic) char hasStoredValue;                                                 //@synthesize hasStoredValue=_hasStoredValue - In the implementation block
@property (nonatomic,retain) NSData * completeHash;                                               //@synthesize completeHash=_completeHash - In the implementation block
@property (assign,nonatomic) unsigned settings;                                                   //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) NSString * logoText;                                                 //@synthesize logoText=_logoText - In the implementation block
@property (nonatomic,retain) PKImage * logoImage;                                                 //@synthesize logoImage=_logoImage - In the implementation block
@property (nonatomic,retain) PKColor * backgroundColor;                                           //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) PKColor * foregroundColor;                                           //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) PKColor * labelColor;                                                //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) PKImage * backgroundImage;                                           //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * devicePrimaryPaymentApplication;              //@synthesize devicePrimaryPaymentApplication=_devicePrimaryPaymentApplication - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * preferredPaymentApplication;                  //@synthesize preferredPaymentApplication=_preferredPaymentApplication - In the implementation block
@property (assign,nonatomic) int effectivePaymentApplicationState;                                //@synthesize effectivePaymentApplicationState=_effectivePaymentApplicationState - In the implementation block
@property (assign,getter=isPrivateLabel,nonatomic) char privateLabel;                             //@synthesize privateLabel=_privateLabel - In the implementation block
@property (assign,getter=isCobranded,nonatomic) char cobranded;                                   //@synthesize cobranded=_cobranded - In the implementation block
@property (assign,nonatomic) char deletePending;                                                  //@synthesize deletePending=_deletePending - In the implementation block
@property (assign,nonatomic) char hasUserSelectablePaymentApplications;                           //@synthesize hasUserSelectablePaymentApplications=_hasUserSelectablePaymentApplications - In the implementation block
@property (nonatomic,retain) NSData * logoImageEncoded;                                           //@synthesize logoImageEncoded=_logoImageEncoded - In the implementation block
@property (nonatomic,retain) NSData * backgroundImageEncoded;                                     //@synthesize backgroundImageEncoded=_backgroundImageEncoded - In the implementation block
+(char)supportsSecureCoding;
+(char)isCachingEnabled;
+(void)setCachingEnabled:(char)arg1 ;
-(PKPaymentApplication *)devicePrimaryPaymentApplication;
-(NSString *)logoText;
-(PKNFCPayload *)nfcPayload;
-(char)isPrivateLabel;
-(PKColor *)labelColor;
-(NSData *)manifestHash;
-(char)hasStoredValue;
-(NSNumber *)groupID;
-(void)setGroupID:(NSNumber *)arg1 ;
-(void)setBackgroundColor:(PKColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)settings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(PKImage *)backgroundImage;
-(void)setStyle:(int)arg1 ;
-(void)setBackgroundImage:(PKImage *)arg1 ;
-(void)setSettings:(unsigned)arg1 ;
-(PKColor *)foregroundColor;
-(void)setForegroundColor:(PKColor *)arg1 ;
-(NSString *)uniqueID;
-(char)deletePending;
-(PKPaymentApplication *)preferredPaymentApplication;
-(void)setIngestionDate:(NSDate *)arg1 ;
-(void)setPrivateLabel:(char)arg1 ;
-(void)setDeletePending:(char)arg1 ;
-(void)setNfcPayload:(PKNFCPayload *)arg1 ;
-(void)setCompleteHash:(NSData *)arg1 ;
-(void)setPreferredPaymentApplication:(PKPaymentApplication *)arg1 ;
-(void)setEffectivePaymentApplicationState:(int)arg1 ;
-(void)setHasUserSelectablePaymentApplications:(char)arg1 ;
-(void)setLogoImageEncoded:(NSData *)arg1 ;
-(void)setBackgroundImageEncoded:(NSData *)arg1 ;
-(NSDate *)ingestionDate;
-(int)effectivePaymentApplicationState;
-(char)hasUserSelectablePaymentApplications;
-(NSData *)logoImageEncoded;
-(NSData *)backgroundImageEncoded;
-(NSData *)completeHash;
-(id)encodeAsData:(id)arg1 ;
-(id)safeUnarchiveObjectOfClass:(Class)arg1 withData:(id)arg2 ;
-(void)encodeObject:(id)arg1 asDataInCoder:(id)arg2 withKey:(id)arg3 ;
-(void)setCobranded:(char)arg1 ;
-(void)setDevicePrimaryPaymentApplication:(PKPaymentApplication *)arg1 ;
-(char)isCobranded;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(void)setManifestHash:(NSData *)arg1 ;
-(void)setRelevantDate:(NSDate *)arg1 ;
-(void)setHasStoredValue:(char)arg1 ;
-(NSDate *)relevantDate;
-(void)setLabelColor:(PKColor *)arg1 ;
-(void)setLogoText:(NSString *)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(void)setLogoImage:(PKImage *)arg1 ;
-(PKImage *)logoImage;
-(NSString *)passTypeIdentifier;
@end

