/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSDate, NSDictionary, NSString;

@interface MBProperties : NSObject {

	char _protect;
	char _protected;
	id _plist;

}

@property (nonatomic,readonly) id propertyList;                                   //@synthesize plist=_plist - In the implementation block
@property (assign,getter=isProtected,nonatomic) char protected;                   //@synthesize protected=_protected - In the implementation block
@property (assign,nonatomic) double systemDomainsVersion; 
@property (nonatomic,retain) NSData * keybagData; 
@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double version; 
@property (assign,getter=wasPasscodeSet,nonatomic) char passcodeSet; 
@property (assign,getter=isEncrypted,nonatomic) char encrypted; 
@property (nonatomic,readonly) NSDictionary * containers; 
@property (nonatomic,readonly) NSDictionary * appleIDs; 
@property (nonatomic,retain) NSString * activeAppleID; 
@property (nonatomic,retain) NSDictionary * lockdownKeys; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) NSString * buildVersion; 
@property (nonatomic,readonly) char hasCorruptSQLiteDBs; 
+(id)properties;
+(id)propertiesWithFile:(id)arg1 error:(id*)arg2 ;
-(char)writeToFile:(id)arg1 error:(id*)arg2 ;
-(id)propertyList;
-(NSDictionary *)containers;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(char)_boolForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)buildVersion;
-(void)setVersion:(double)arg1 ;
-(double)version;
-(NSString *)deviceName;
-(void)addContainer:(id)arg1 ;
-(void)setEncrypted:(char)arg1 ;
-(NSString *)productType;
-(NSString *)deviceID;
-(void)_setBool:(char)arg1 forKey:(id)arg2 ;
-(id)_dictionaryForKey:(id)arg1 ;
-(id)_dataForKey:(id)arg1 ;
-(id)containerWithIdentifier:(id)arg1 ;
-(id)initWithFile:(id)arg1 error:(id*)arg2 ;
-(double)systemDomainsVersion;
-(void)setSystemDomainsVersion:(double)arg1 ;
-(void)_setData:(id)arg1 forKey:(id)arg2 ;
-(void)_setDictionary:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)lockdownKeys;
-(id)_stringForLockdownKey:(id)arg1 ;
-(NSDictionary *)appleIDs;
-(char)wasPasscodeSet;
-(NSData *)keybagData;
-(void)setKeybagData:(NSData *)arg1 ;
-(void)setLockdownKeys:(NSDictionary *)arg1 ;
-(char)hasCorruptSQLiteDBs;
-(void)addAppleIDsFromSet:(id)arg1 ;
-(NSString *)activeAppleID;
-(void)setActiveAppleID:(NSString *)arg1 ;
-(void)addContainersFromArray:(id)arg1 ;
-(void)setProtected:(char)arg1 ;
-(id)dataWithError:(id*)arg1 ;
-(char)isEncrypted;
-(void)setPasscodeSet:(char)arg1 ;
-(NSString *)serialNumber;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(char)isProtected;
@end

