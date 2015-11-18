/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:18:54 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABVCardParser.h>

@class NSMutableDictionary, NSData;

@interface ABVCardCardDAVParser : ABVCardParser {

	NSMutableDictionary* _unknownAttributes;
	char _removeExistingProperties;
	char _localRecordHasAdditionalProperties;
	int _lastCropRectX;
	int _lastCropRectY;
	int _lastCropRectWidth;
	int _lastCropRectHeight;
	NSData* _lastCropRectChecksum;

}

@property (readonly) char localRecordHasAdditionalProperties;              //@synthesize localRecordHasAdditionalProperties=_localRecordHasAdditionalProperties - In the implementation block
@property (readonly) int lastCropRectX;                                    //@synthesize lastCropRectX=_lastCropRectX - In the implementation block
@property (readonly) int lastCropRectY;                                    //@synthesize lastCropRectY=_lastCropRectY - In the implementation block
@property (readonly) int lastCropRectWidth;                                //@synthesize lastCropRectWidth=_lastCropRectWidth - In the implementation block
@property (readonly) int lastCropRectHeight;                               //@synthesize lastCropRectHeight=_lastCropRectHeight - In the implementation block
@property (retain,readonly) NSData * lastCropRectChecksum;                 //@synthesize lastCropRectChecksum=_lastCropRectChecksum - In the implementation block
-(void)cleanUpCardState;
-(id)defaultLabel;
-(void)setLocalRecordHasAdditionalProperties:(char)arg1 ;
-(void)noteLackOfValueForProperty:(unsigned)arg1 ;
-(id)genericLabel;
-(char)parseUID;
-(id)defaultURLLabel;
-(char)_handleUnknownTag:(id)arg1 withValue:(id)arg2 ;
-(void)noteLackOfValueForImageData;
-(id)defaultADRLabel;
-(char)importToPerson:(void*)arg1 removeExistingProperties:(char)arg2 ;
-(char)importToGroup:(void*)arg1 removeExistingProperties:(char)arg2 ;
-(void*)createRecordInSource:(void*)arg1 outRecordType:(unsigned*)arg2 ;
-(char)localRecordHasAdditionalProperties;
-(int)lastCropRectX;
-(int)lastCropRectY;
-(int)lastCropRectWidth;
-(int)lastCropRectHeight;
-(NSData *)lastCropRectChecksum;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end

