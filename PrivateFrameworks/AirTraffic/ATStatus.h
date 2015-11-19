/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATStatus : NSObject <NSSecureCoding> {

	char _wirelessSync;
	char _automaticSync;
	NSString* _libraryID;
	NSString* _dataClass;
	unsigned _syncStage;
	unsigned _syncType;
	float _progress;
	NSString* _localizedDescription;
	unsigned _completedAssetCount;
	unsigned _totalAssetCount;
	unsigned _totalItemCount;

}

@property (nonatomic,copy) NSString * libraryID;                                     //@synthesize libraryID=_libraryID - In the implementation block
@property (nonatomic,copy) NSString * dataClass;                                     //@synthesize dataClass=_dataClass - In the implementation block
@property (assign,nonatomic) unsigned syncStage;                                     //@synthesize syncStage=_syncStage - In the implementation block
@property (assign,nonatomic) unsigned syncType;                                      //@synthesize syncType=_syncType - In the implementation block
@property (assign,nonatomic) float progress;                                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                          //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign,nonatomic) unsigned completedAssetCount;                           //@synthesize completedAssetCount=_completedAssetCount - In the implementation block
@property (assign,nonatomic) unsigned totalAssetCount;                               //@synthesize totalAssetCount=_totalAssetCount - In the implementation block
@property (assign,nonatomic) unsigned totalItemCount;                                //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (assign,getter=isWirelessSync,nonatomic) char wirelessSync;                //@synthesize wirelessSync=_wirelessSync - In the implementation block
@property (assign,getter=isAutomaticSync,nonatomic) char automaticSync;              //@synthesize automaticSync=_automaticSync - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)libraryID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)localizedDescription;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(id)initWithLibraryID:(id)arg1 dataClass:(id)arg2 ;
-(unsigned)syncStage;
-(char)isWirelessSync;
-(char)isAutomaticSync;
-(NSString *)dataClass;
-(void)setDataClass:(NSString *)arg1 ;
-(void)setTotalItemCount:(unsigned)arg1 ;
-(void)setSyncStage:(unsigned)arg1 ;
-(void)setCompletedAssetCount:(unsigned)arg1 ;
-(void)setAutomaticSync:(char)arg1 ;
-(void)setWirelessSync:(char)arg1 ;
-(unsigned)completedAssetCount;
-(unsigned)totalItemCount;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setLibraryID:(NSString *)arg1 ;
-(unsigned)syncType;
-(void)setSyncType:(unsigned)arg1 ;
-(unsigned)totalAssetCount;
-(void)setTotalAssetCount:(unsigned)arg1 ;
@end
