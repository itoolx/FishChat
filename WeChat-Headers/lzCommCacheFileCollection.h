//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface lzCommCacheFileCollection : NSObject
{
    NSMutableArray *_fileList;
    long long _totalSize;
    NSMutableArray *_expfileList;
}

@property(retain, nonatomic) NSMutableArray *expfileList; // @synthesize expfileList=_expfileList;
@property(nonatomic) long long totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) NSMutableArray *fileList; // @synthesize fileList=_fileList;
- (void).cxx_destruct;
- (id)sortByDate;
- (void)dealloc;
- (id)init;

@end

