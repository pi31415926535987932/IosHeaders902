/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreCDP/CoreCDP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface CDPDevice : NSObject <NSCopying> {

	char _hasRandomSecret;
	char _hasNumericSecret;
	char _isUsingMultipleiCSC;
	NSString* _localizedName;
	NSString* _model;
	NSString* _recordID;
	NSNumber* _numericSecretLength;
	unsigned _remainingAttempts;
	NSString* _deviceColor;
	NSString* _enclosureColor;
	NSString* _localizedDescription;

}

@property (nonatomic,copy) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * model;                             //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * recordID;                          //@synthesize recordID=_recordID - In the implementation block
@property (assign,nonatomic) char hasRandomSecret;                       //@synthesize hasRandomSecret=_hasRandomSecret - In the implementation block
@property (assign,nonatomic) char hasNumericSecret;                      //@synthesize hasNumericSecret=_hasNumericSecret - In the implementation block
@property (nonatomic,copy) NSNumber * numericSecretLength;               //@synthesize numericSecretLength=_numericSecretLength - In the implementation block
@property (assign,nonatomic) char isUsingMultipleiCSC;                   //@synthesize isUsingMultipleiCSC=_isUsingMultipleiCSC - In the implementation block
@property (assign,nonatomic) unsigned remainingAttempts;                 //@synthesize remainingAttempts=_remainingAttempts - In the implementation block
@property (nonatomic,copy) NSString * deviceColor;                       //@synthesize deviceColor=_deviceColor - In the implementation block
@property (nonatomic,copy) NSString * enclosureColor;                    //@synthesize enclosureColor=_enclosureColor - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
-(id)description;
-(NSString *)localizedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)model;
-(NSString *)localizedName;
-(void)setModel:(NSString *)arg1 ;
-(id)initWithSecureBackupMetadataInfo:(id)arg1 ;
-(id)initWithSecureBackupRecordInfo:(id)arg1 ;
-(char)hasRandomSecret;
-(void)setHasRandomSecret:(char)arg1 ;
-(void)setHasNumericSecret:(char)arg1 ;
-(void)setNumericSecretLength:(NSNumber *)arg1 ;
-(char)isUsingMultipleiCSC;
-(void)setIsUsingMultipleiCSC:(char)arg1 ;
-(void)setRemainingAttempts:(unsigned)arg1 ;
-(NSNumber *)numericSecretLength;
-(char)hasNumericSecret;
-(unsigned)remainingAttempts;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)enclosureColor;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)recordID;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)deviceColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(void)setEnclosureColor:(NSString *)arg1 ;
@end

