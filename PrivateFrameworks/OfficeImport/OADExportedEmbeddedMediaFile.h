/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADEmbeddedMediaFile.h>

@class TSPData;

@interface OADExportedEmbeddedMediaFile : OADEmbeddedMediaFile {

	char isAudioOnly;
	TSPData* _tspData;

}

@property (nonatomic,retain) TSPData * tspData;              //@synthesize tspData=_tspData - In the implementation block
-(void)dealloc;
-(char)isAudioOnly;
-(void)setIsAudioOnly:(char)arg1 ;
-(TSPData *)tspData;
-(void)setTspData:(TSPData *)arg1 ;
@end

